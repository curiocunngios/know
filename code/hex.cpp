#include <iostream>

int main() {
    int x = 0x10096;
    int y = 0xff;
    int n = -2;

    y = y | x;
    n = n << 4;
    std::cout << std::hex << "0x" << n << std::endl;
}