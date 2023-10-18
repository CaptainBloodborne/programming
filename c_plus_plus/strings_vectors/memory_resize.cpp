//
// Created by artem on 15.10.23.
//
#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {1, 2, 3, 4};

    data.reserve(10);
    std::cout << data.size() << "\n";

    data.resize(3);
    for (int i: data) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    data.resize(6);

    for (int i: data) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}
