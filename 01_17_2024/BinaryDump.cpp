// C++ Function template
// Binary dump

#include <iostream>
#include <bitset>

using namespace std;

template<typename T>
void BinaryDump(T n)
{
    int mask;

    int size(sizeof(T));
    switch (size)
    {
        case 1 :    mask = 0100;
                    break;
        case 2 :    mask = 040000;
                    break;
        case 4 :    mask = 010000000000;
                    break;
    }
    cout << (n < 0 ? '1' : '0');                        // 7
                                                        // 15
                                                        // 31
    for (int i = 0; i < 8 * size - 1; ++i, mask >>= 1)
        cout << (n & mask ? '1' : '0');                    // 6 - 0
                                                        // 14 - 0
                                                        // 30 - 0
    cout << endl;
}

int main()
{
    int n(0);

    do
    {
        cout << "? ";
        cin >> n;
        if (cin.good())
            break;
        else
        {
            cout << "Invalid data!\n";
            cin.clear();
        }
    }
    while (1);
    while(cin.get() != '\n');

    BinaryDump<int>(n);
    cout << '\n' << bitset<32>(n) << endl;
    cout << endl;
    BinaryDump<short int>(n);
    cout << '\n' << bitset<16>(n) << endl;
    cout << endl;
    BinaryDump<char>(n);
    cout << '\n' << bitset<8>(n) << endl;

    return 0;
}
