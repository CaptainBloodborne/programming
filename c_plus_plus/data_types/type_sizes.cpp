#include <iostream>
#include <limits>

int main() {
    std::cout << "minimum value: " << std::numeric_limits<short int>::min() << "\n"
    << "maximum value: " << std::numeric_limits<short int>::max() << "\n";
}
