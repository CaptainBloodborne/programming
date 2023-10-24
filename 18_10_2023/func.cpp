#include <iostream>

int n = 17;
int m = 10;

int clean(int m) {
    int n(0);
    n += m;
    std::cout << "Inside: " << n <<"\n";


    return 0;
}

int main() {

    clean(5);
    int x = 129;
    std::cout << (x & 0200) << "\n";

    // std::cout << n <<"\n";

    return 0;
}
