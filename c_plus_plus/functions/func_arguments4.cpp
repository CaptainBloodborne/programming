#include <iostream>

using namespace std;

int main() {

    int a = 1, b = 2;

    {

        int& x = a;

        int& y = b;

        int z = x;

        x = y;

        y = z;

    }

    std::cout << a << " " << b << "\n";  // 2 1

}