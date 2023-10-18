#include <iostream>

int main() {
    int n = 1;
    while (n <= 10) { // цикл с предусловием
        std::cout << n << "\t" << n * n << "\n"; // выводим число и его квадрат через табуляцию
        ++n;
    }

}
