#include <iostream>
#include <string>
#include <stdio.h>

int main() {
    std::string name; // Объявляем переменную name
    printf("ABCd %x\n", -0xf5 + 0b1010001);
    std::cout << "What is your name?\n";
    // std::cin >> name; // Считываем значение с клавиатуры и записываем в name
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!\n";

    return 0;
}
