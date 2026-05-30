#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device/class.h>
#include <linux/err.h>
#include <linux/device.h>
#include <linux/uaccess.h>
#include <linux/gfp_types.h>
#include <uapi/asm-generic/errno-base.h>

#define DEV_NAME "xdd"
static struct cdev my_cdev;
static struct class* cls;
static struct device* devs;
char* buf;
MODULE_LICENSE("GPL");
// good to keep function static if only only used by this .c file
static int device_open(struct inode* inode, struct file* file) {
    return 0;
}

static int device_release(struct inode* inode, struct file* file) {
    return 0;
}

static ssize_t device_read(struct file* file, char* buffer, size_t length, loff_t* offset) {
    printk(KERN_INFO "read");

    int len = strlen(buf);
    if (*offset >= len) {
        return 0; // success
    }
    size_t left = len - *offset;
    size_t bytes_read = min(left, length);
    if (copy_to_user(buffer, buf, bytes_read)) {
        return -EFAULT;
    }

    *offset += bytes_read;
    return bytes_read;
}

static ssize_t device_write(struct file* file, const char* buffer, size_t length, loff_t* offset) {
    printk(KERN_INFO "write");
    // int len = strlen(buffer); // fault because cannot read userspace address in kernel mode
    if (*offset >= length) {
        return 0;
    }

    size_t left = length - *offset;
    size_t bytes_written = min(left, length);
    if (copy_from_user(buf, buffer, bytes_written)) {
        return -EFAULT;
    }
    *offset += bytes_written;
    return bytes_written;
}


// C99 struct initialization syntax
struct file_operations fops = {
    .open = device_open,
    .read = device_read,
    .write = device_write,
    .release = device_release
};



static int start(void) {
    buf = kzalloc(0x500, GFP_KERNEL);
    dev_t dev;
    int ret = alloc_chrdev_region(&dev, 0, 1, DEV_NAME); // returns 0xf0
    if (ret) {
        printk(KERN_INFO "failed 0\n");
    }
    cdev_init(&my_cdev, &fops);
    ret = cdev_add(&my_cdev, dev, 1); // returns 0xb

    if (ret) {
        printk(KERN_INFO "failed 1\n");
    }

    printk(KERN_INFO "Hello World\n");

    // the above register the device, like registering a number on the system?
    // the following creates the device, actually making it under /dev i guess? let's see
    int major = MAJOR(dev);
    cls = class_create(DEV_NAME);

    if (IS_ERR(cls)) {
        printk(KERN_INFO "failed 3\n");
    }
    devs = device_create(cls, NULL, MKDEV(major, 0), NULL, DEV_NAME);

    if (IS_ERR(devs)) {
        printk(KERN_INFO "failed 4\n");
    }
    return 0;
}


static void exit_print(void) {
    kfree(buf);
    printk(KERN_INFO "BYE WORLD\n");
}

module_init(start);
// int major = register_chrdev(0, DEV_NAME, &fops);
module_exit(exit_print);

