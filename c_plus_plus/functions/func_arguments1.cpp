#include <iostream>

using namespace std;

void f(int x, int y) {

    ++x;
    ++y;

}

 

int main() {

    int a(0);
    int b(0);

    // какая-то инициализация a и b

    f(a, b);

}