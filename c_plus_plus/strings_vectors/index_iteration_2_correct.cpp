#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {1, 2, 2, 4, 5};
    for (int64_t i = 0; i < std::size(data) - 1; ++i) {
        if (data[i] == data[i + 1]) {
            std::cout << "Duplicate value: " << data[i] << "\n";
        }
    }
}
