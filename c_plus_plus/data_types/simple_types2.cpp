#include <iostream>
#include <climits>
#include <ostream>

int main() {

    std::cout << "char: " << sizeof(char) << "\n";                 //  1
    std::cout << CHAR_BIT << ' ' << CHAR_MIN << ' ' << CHAR_MAX << std::endl;

    std::cout << "bool: " << sizeof(bool) << "\n";                 //  1

    std::cout << "short int: " << sizeof(short int) << "\n";       //  2 (по стандарту >= 2)
    std::cout << SHRT_WIDTH << ' ' << SHRT_MIN << ' ' << SHRT_MAX << std::endl;

    std::cout << "int: " << sizeof(int) << "\n";                   //  4 (по стандарту >= 2)
    std::cout << INT_WIDTH << ' ' << INT_MIN << ' ' << INT_MAX << std::endl;

    std::cout << "long int: " << sizeof(long int) << "\n";         //  8 (по стандарту >= 4)
    std::cout << LONG_BIT << ' ' << LONG_MIN << ' ' << LONG_MAX << std::endl;

    std::cout << "long long int: " << sizeof(long long) << "\n";   //  8 (по стандарту >= 8)
    std::cout  << LONG_LONG_MIN << ' ' << LONG_LONG_MAX << std::endl;

    std::cout << "float: " << sizeof(float) << "\n";               //  4

    std::cout << "double: " << sizeof(double) << "\n";             //  8

    std::cout << "long double: " << sizeof(long double) << "\n";   // 16

    // std::cout << -2147483648 << '\t' << 2147483647 << std::endl;

    return 0;

}
