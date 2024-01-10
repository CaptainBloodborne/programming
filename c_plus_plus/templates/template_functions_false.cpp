#include <iostream>
#include <string>

 int Max(int x, int y) {

    if (x > y) {

        return x;

    } else {

        return y;

    }

}

int main() {

    std::cout << Max(1, 2) << "\n";  // 2

    std::cout << Max(3.14159, 2.71828) << "\n";  // внезапно 3

 

    // std::string word1 = "hello", word2 = "world";

    // std::cout << Max(word1, word2);  // ошибка компиляции

}