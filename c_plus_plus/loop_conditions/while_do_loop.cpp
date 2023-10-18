#include <iostream>

int main() {
    int n = 1;

    do { // цикл с постусловием, первая итерация всегда выполняется безусловно
        std::cout << n << "\t" << n * n << "\n";
        ++n;
    } while (n <= 10);
}
