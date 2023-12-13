#include <iostream>

using namespace std;

template<typename T>
void BinaryDump(T n)
{
    string c = typeid(T).name();
    cout << c << endl;

    switch (c[0])
    {
        case 'l':
            cout << n << endl;
            cout << c[1] << endl;

    }
}

int main()
{
    
char i(25);

BinaryDump(i);

    return 0;
}
