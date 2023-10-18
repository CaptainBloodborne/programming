#include <iostream>
#include <ostream>

int main() {

    int n (-17); // стиль c++

    bool negative = false;

    if (n & 0200) {
        negative = true;
    }

    int m = 0377; // стиль

    n = n & m;

    std::cout << n << "\n";

    m = 0125; // 0252

    n = n ^ m;
    std::cout << n << "\n";
    
    if (negative) {
        m = 037777777400;

        n = n ^ m;
    }

    std::cout << n << "\n";

    return 0;
}
