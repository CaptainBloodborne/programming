#include <iostream>

int main() {
    int x;
    std::cout << x << "\n"; // непредсказуемый результат, т.к.

    int y;
    std::cin >> y; // допустимое поведение

}
