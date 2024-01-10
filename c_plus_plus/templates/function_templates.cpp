#include <iostream>
#include <string>

 
// int Max(int x, int y) {

//     if (x > y) {
//         return x;
//     } else {
//         return y;
//     }
// }


// double Max(double x, double y) {

//     if (x > y) {
//         return x;
//     } else {

//         return y;
//     }
// }


// std::string Max(const std::string& x, const std::string& y) {

//     if (x > y) {
//         return x;
//     } else {
//         return y;
//     }

// }

struct Point {

    double x = 0.0;

    double y = 0.0;

    double z = 0.0;

};

template <typename T>
T Max(const T& x, const T& y) {

    if (x > y) {

        return x;

    } else {

        return y;

    }

}
 

int main() {

    std::cout << Max(1, 2) << "\n";  // 2
    std::cout << Max(3.14159, 2.71828) << "\n";  // 3.14159


    std::string word1 = "hello", word2 = "world";
    std::cout << Max(word1, word2) << std::endl;  // world

    Point p1, p2;

    Point p = Max(p1, p2);  // ошибка компиляции

}