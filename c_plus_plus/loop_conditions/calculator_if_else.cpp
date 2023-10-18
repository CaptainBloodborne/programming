#include <iostream>
#include <cstdint>

int main() {
    int64_t a, b;
    char operation;
    std::cin >> a >> operation >> b;

    if (operation == '+') {
        std::cout << a + b << "\n";
    } else if (operation == '-') {
        std::cout << a - b << "\n";
    } else if (operation == '*') {
        std::cout << a * b << "\n";
    } else if (operation == '/') {
        std::cout << a / b << "\n";
    } else if (operation == '%') {
        std::cout << a % b << "\n";
    } else {
        std::cout << "Unknown operation!\n";
    }

}
