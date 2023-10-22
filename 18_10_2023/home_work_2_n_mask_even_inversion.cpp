#include <iostream>

int main() {

    int n (17);

    int m (0377);

    n = n & m;

    m = 0125; // восьмеричная маска для инвертирования четных битов

    n = n ^ m;
    
    if (n & 0200) {
        m = 037777777400;

        n = n ^ m;
    }

    std::cout << n << std::endl;

    return 0;
}
