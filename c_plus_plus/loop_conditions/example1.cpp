#include <iostream>

int main() {
    int x;
    std::cin >> x;

    if (x == 0) { // condition1
        std::cout << "zero or negative\n"; // случай, когда condition1 истинно
    } else if (x == 1) { // condition2
        std::cout << "one\n"; // случай, когда condition1 ложно, а condition2 истинно
    } else if (x == 2) { // condition3
        std::cout << "two\n"; // случай, когда condition1 и condition2 ложны, а condition3 истинно
    } else {
        std::cout << "many\n"; // случай, когда condition1, condition2 и condition3 ложны
    }

}