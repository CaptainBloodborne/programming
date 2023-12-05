#include <iostream>
#include <limits>
#include <bitset>

using namespace std;

void print(char* pointer, int n)
{
    for (int i(0); i < n; ++i)
    {
        cout << pointer[i];
    }

    cout << endl;
}

void HexadecimalDump(char* pointer, long n)
{
	long mask(0xf00000000000000);
	long digit((n >> 60) & 0xf);

    pointer[0] = (digit > 9 ? char(digit + 87) : char(digit + 48));
	for (int i(1); i < 16; ++i, mask >>= 4)
	{
		digit = (n & mask) >> 60 - i * 4; // первая итерация i = 1

        pointer[i] = (digit > 9 ? char(digit + 87) : char(digit + 48));
	}
}

void BinaryDump(char* pointer, long n)
{
	long mask(0x4000000000000000);

    pointer[0] = (n < 0 ? '1' : '0');

	for (int i(1); i < 64; ++i, mask >>= 1)
    {
        pointer[i] = (n & mask ? '1' : '0');
    }

}


int main() 
{
    double n(0.0);

    char binary_dump[64];
    char hexadecimal_dump[16];
    
    for (int i(0); i <= 3; ++i)
    {

        if (i == 3)
        {
            cout << "Attempts limits exceeded! Exiting..." << endl;
            return -1;
        }

        cout << "Input n? ";
        cin >> n;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input error: Wrong format! ";
        } else break;
    }

    cout << scientific << "Source data: " << n << endl;
    cout << endl;

    double* pDouble = &n;
	long* p = reinterpret_cast<long*>(pDouble);

    BinaryDump(binary_dump, *p);
    cout << "Binary dump: ";
    print(binary_dump, sizeof binary_dump);
    cout << "Binary dump (bitset): " << bitset<64>(*p);
    cout << endl;

    HexadecimalDump(hexadecimal_dump, *p);
    cout << "Hexadecimal dump: ";
    print(hexadecimal_dump, sizeof hexadecimal_dump);
    cout << "Hexadecimal dump (hex manipulator): " << hex << *p << endl;

    return 0;
}
