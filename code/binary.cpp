#include <iostream>

int main () {
    int x = 0b1000;
    int y = 0;
    int z = 0b1001;

    int p = 0b0001;
    int k = 0b1011;

    y = y | x;
    std::cout << y << std::endl;

    y = y | z;

    std::cout << y << std::endl;

    y = y & p;
    std::cout << y << std::endl;

    z = z << 2;
    std::cout << z << std::endl;

    k = k >> 1;
    std::cout << k << std::endl;
}