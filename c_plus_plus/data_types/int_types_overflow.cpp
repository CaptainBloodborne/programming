#include <iostream>

int main() {
    unsigned int a = 123456; // на 64-битной архитектуре sizeof(a) = 4
    unsigned int x = 0;
    unsigned int y = 0 - 1;
    unsigned int z = y + 1;

    short int sx = 18000;
    short int sy = sx + 32766;
    short int sz = sy + 1;
    short int szm = sx * 2;

    // Произведение a * a не помещается в 4 байта, так как оно больше 2^32
    std::cout << a * a << "\n";
    std::cout << y << "\n";
    std::cout << z << "\n\n";

    std::cout << sy << "\n";
    std::cout << sz << "\n";
    std::cout << szm << "\n";
}
