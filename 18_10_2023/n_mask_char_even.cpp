#include <iostream>
#include <bitset>


int main() {

    using namespace std;

    char n(-17);

    cout << bitset<8>(n) << endl;

    // int m (0377);

    // n = n & m;

    char m (0125); // восьмеричная маска для инвертирования четных битов

    n = n ^ m;

    cout << bitset<8>(n) << endl;
    
    // if (n & 0200) {
    //     m = 037777777400;

    //     n = n ^ m;
    // }

    cout << int(n) << endl;

    return 0;
}
