#include <iostream>
#include <cmath>

int main() {
    int cell_1_x, cell_1_y, cell_2_x, cell_2_y;

    std::cin >> cell_1_x >> cell_1_y >> cell_2_x >> cell_2_y;

    if (cell_1_x == cell_2_x || cell_1_y == cell_2_y) {
        std::cout << "YES\n";
    } else if (std::abs(cell_1_x - cell_2_x) == std::abs(cell_1_y - cell_2_y)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}
