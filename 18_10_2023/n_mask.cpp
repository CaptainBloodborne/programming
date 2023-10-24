#include <iostream>

int main() {

    int n (-1017); // стиль C++

    int m = 0177777; // стиль C

    n = n & m;
    std::cout << n << std::endl;

    m = 052525; /* 0x5555 hexadecimal
    m = 0125 - восьмеричная маска для инвертирования четных битов
    m = 0252 - восьмеричная маска для инвертирования нечетных битов
    */

    n = n ^ m;
    std::cout << n << std::endl;
    
    if (n & 0100000) {
        m = 037777600000;

        n = n ^ m;

        std::cout << n << " Отрицательно" << std::endl;
    }

    std::cout << "Результат: " << n << std::endl;

    return 0;
}
