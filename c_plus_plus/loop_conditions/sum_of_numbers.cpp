#include <iostream>
#include <cstdint>

int main() {
    uint64_t x;
    std::cin >> x;

    int sum = 0;
    for (; x > 0; x /= 10) {
        sum += x % 10;
    }

    std::cout << sum << "\n";
}
