#include <iostream>
#include <cmath>

int main() {
    double delta = 0.000001;

    double x = 0.1, y = 0.2;
    double sum = x + y;

    if (std::abs(sum - 0.3) < delta) {
        std::cout << "EQUAL ";
    } else {
        std::cout << "NOT EQUAL ";
    }

    std::cout << sum << "\n";
}
