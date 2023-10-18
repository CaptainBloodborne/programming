#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {1, 2, 3 ,4 ,5};

    for (size_t i = 0; i != data.size(); ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << "\n";
}
