//
// Created by artem on 15.10.23.
//
#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> data = {3, 1, 4, 1, 5, 9, 2, 6};

    // Сортировка диапазона вектора от начала до конца
    std::sort(data.begin(), data.end());

    for (int i: data) {
        std::cout << i << " ";
    }

    std::cout << "\n";

    // Для сортировки по убыванию можно передать на вход обратные итераторы
    std::sort(data.rbegin(), data.rend());

    for (int i: data) {
        std::cout << i << " ";
    }

    std::cout << "\n";

    // C++20 доступен более элегантный способ сортировки через std::ranges::sort
    std::vector<int> data_2 = {3, 1, 4, 1, 5, 9, 2, 6};

    std::ranges::sort(data_2); // // можно передать сам вектор, а не его диапазоны

    for (int i: data) {
        std::cout << i << " ";
    }

    std::cout << "\n";

}
