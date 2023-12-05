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

void HexadecimalDump(char* pointer, int n)
{
	int mask(0xf000000);
	int digit((n >> 28) & 0xf);

    pointer[0] = (digit > 9 ? char(digit + 87) : char(digit + 48));
	for (int i(1); i < 8; ++i, mask >>= 4)
	{
		digit = (n & mask) >> 28 - i * 4; // первая итерация i = 1

        pointer[i] = (digit > 9 ? char(digit + 87) : char(digit + 48));
	}
}

void BinaryDump(char* pointer, int n)
{
	int mask(010000000000);

    pointer[0] = (n < 0 ? '1' : '0');

	for (int i(1); i < 32; ++i, mask >>= 1)
    {
        pointer[i] = (n & mask ? '1' : '0');
    }

}

int main() 
{
    float n(0.0);

    char binary_dump[32];
    char hexadecimal_dump[8];
    
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

    cout << fixed << "Source data: " << n << endl;
    cout << endl;

    float* pFloat = &n;
	int* p = reinterpret_cast<int*>(pFloat);

    BinaryDump(binary_dump, *p);
    cout << "Binary dump: ";
    print(binary_dump, sizeof binary_dump);
    cout << "Binary dump (bitset): " << bitset<32>(*p);
    cout << endl;

    HexadecimalDump(hexadecimal_dump, *p);
    cout << "Hexadecimal dump: ";
    print(hexadecimal_dump, sizeof hexadecimal_dump);
    cout << "Hexadecimal dump (hex manipulator): " << hex << *p << endl;

    return 0;
}
