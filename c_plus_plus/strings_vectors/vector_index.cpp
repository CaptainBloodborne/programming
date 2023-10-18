#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    int a = data[0];
    std::cout << data.at(0);
    std::cout << data.front(); // То же что и data[0]. При пустом векторе неопределенное поведение

    int b = data[4];
    std::cout << data.at(4);
    std::cout << data.back(); // То жк что и data[data.size() - 1] При пустом векторе неопределенное поведение

    if (!data.empty()) {
        // вектор не пуст, с ним можно работать.
    }

    int c = data[2];
    std::cout << a << " " << b << "\n";
    data[2] = -3;

    int f = data[42]; // неопределённое поведение: может произойти всё что угодно
    std::cout << f << "\n";
    /* std::cout << data.at(42);
    произойдет исключение std::cout << data.at(4);
    */

    std::cout << data.size() << "\n";
}
