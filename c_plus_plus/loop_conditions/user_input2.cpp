#include <iostream>

int main() {
    int sum = 0;
    int x;

    while (std::cin >> x) {
        sum += x;
    }

    std::cout << "Sum is: " << sum << "\n";
}
