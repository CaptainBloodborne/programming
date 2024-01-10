#include <iostream>

template <typename T>
T Max(const T& x, const T& y) {

    if (x > y) {

        return x;

    } else {

        return y;

    }

}

int main() {

    Max<double>(3.14159, 2.71828);  // 3.14159

    Max<int>(3.14159, 2.71828);  // вызывается int-версия, вернётся 3

    std::cout << Max(1, 2) << "\n";  // 2, вызывается Max<int>

    std::cout << Max(3.14159, 2.71828) << "\n";  // 3.14159, вызывается Max<double>

 

    std::string word1 = "hello", word2 = "world";

    std::cout << Max(word1, word2);  // world, вызывается Max<std::string>

}
