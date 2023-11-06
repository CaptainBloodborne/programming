#include <iostream>

int main() 
{
    using namespace std;

    int n (-17);

    int m (0377);

    n = n & m;

    m = 0252; // восьмеричная маска для инвертирования нечетных битов

    n = n ^ m;

    cout << n << endl;

    return 0;
}
