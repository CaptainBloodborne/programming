#include <iostream>


int& Sum(int a, int b) {  // ошибка!

    int result = a + b;

    return result;

}

int main() {

    std::cout << Sum(2, 3) << "\n";  // неопределённое поведение!

}
