#include <iostream>
#include <vector>

 

int main() {

    const std::vector<int> v = {1, 3, 5};

    std::cout << v.size() << "\n";  // OK, напечатает 3

    v.clear();  // ошибка компиляции: константный вектор нельзя изменять

    v[0] = 0;  // тоже ошибка компиляции

}