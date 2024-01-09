#include <iostream>

 

int main() {

    const int c1(42);  // эта константа известна в compile time

    int x;

    std::cin >> x;

    const int c2(2 * x);  // значение становится известным только в runtime

    // c2 = 0;  // ошибка компиляции: константе нельзя присвоить новое значение

}
