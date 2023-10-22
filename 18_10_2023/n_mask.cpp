#include <iostream>

int main() {

    int n (-17); // стиль C++

    int m = 0377; // стиль C

    n = n & m;
    std::cout << n << std::endl;

    m = 0125; /*
    m = 0125 - восьмеричная маска для инвертирования четных битов
    m = 0252 - восьмеричная маска для инвертирования нечетных битов
    */

    n = n ^ m;
    // std::cout << n << std::endl;
    
    if (n & 0200) {
        m = 037777777400;

        n = n ^ m;
    }

    std::cout << "Результат: " << n << std::endl;

    return 0;
}
