#include <iostream>

int main() {

    int n (-17); // стиль c++

    int m = 0377; // стиль

    n = n & m;

    std::cout << n << "\n";

    m = 0125; // 0252

    n = n ^ m;
    std::cout << n << "\n";

    m = 037777777400;

    n = n ^ m;

    std::cout << n << "\n";

    return 0;
}
