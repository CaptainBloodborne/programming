#include <iostream>
#include <ostream>

 

int main() {

    int x = 42, y = 13;

    int* ptr;  // по умолчанию не инициализируется, тут лежит «случайный» адрес

    std::cout << ptr << std::endl;

    ptr = nullptr;  // «нулевой» указатель

    ptr = &x;  // теперь в ptr лежит адрес переменной x

    std::cout << *ptr << "\n";  // 42

    ptr = &y;  // можно поменять адрес, записанный в ptr

    std::cout << *ptr << "\n";  // 13

    return 0;

}