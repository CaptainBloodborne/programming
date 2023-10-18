#include <iostream>

int main() {
    int a = 7, b = 3;
    int q  = a / b;  // 2
    int r = a % b; // 1

    int x = 6, y = 4;
    double z = static_cast<double>(a) / b; // 1.5

    std::cout << z << "\n";

    char c = 'A';

    c += 25;  // увеличиваем ASCII-код символа на 25

    std::cout << c << "\n";  // Z
}
