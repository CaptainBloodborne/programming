#include <iostream>

void Swap(int& x, int& y) {  // передаём аргументы по ссылке

    int z = x;

    x = y;

    y = z;

}

int main() {

    int a = 1, b = 2;

    Swap(a, b);

    std::cout << a << " " << b << "\n";  // 2 1

}
