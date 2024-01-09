#include <iostream>

 

int main() {

    int* ptr = nullptr;

    {

        int x = 42;

        ptr = &x;

    }


    // обращаться к памяти, в которой жила переменная x, уже нельзя:

    std::cout << *ptr << "\n";  // неопределённое поведение!

}
