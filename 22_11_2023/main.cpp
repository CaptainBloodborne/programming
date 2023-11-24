#include <iostream>
#include <bitset>
#include <limits>

using namespace std;

void print(char* pointer, int n)
{
	for (;n >= 0; --n)
		cout << pointer[n];
}

void BinaryDump(char* pointer, int n)
{
	int mask(010000000000);

    pointer[31] = (n < 0 ? '1' : '0');

	for (int i = 0; i < 31; ++i, mask >>= 1)
    {
        pointer[30 - i] = (n & mask ? '1' : '0');
    }

}

void HexadecimalDump(char* pointer, int n)
{
	int mask(0xf000000);
	int digit((n >> 28) & 0xf);

    pointer[7] = (digit > 9 ? char(digit + 87) : char(digit + 48));
	for (int i = 0; i < 7; ++i, mask >>= 4)
	{
		digit = (n & mask) >> 24 - i * 4;
        pointer[6 - i] = (digit > 9 ? char(digit + 87) : char(digit + 48));
	}
}

void OctalDump(char* pointer, int n)
{
	int mask(07000000000);

    pointer[10] = char(((n >> 30) & 03) + 48);
	for (int i = 0; i < 10; ++i, mask >>= 3)
    {
        pointer[9 - i] = char(((n & mask) >> 27 - i * 3) + 48);
    }
}

int main(){

    int n(0);

    char binary_dump[32];

    char octal_dump[11];

    char hexadeciaml_dump[8];
    
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

    cout << endl;

    BinaryDump(binary_dump, n);
    print(binary_dump, 31);

    cout << endl;
	cout << bitset<32>(n) << endl;

    cout << endl;

    OctalDump(octal_dump, n);
    print(octal_dump, 10);

    cout << endl;
    cout << oct << n << endl;

    cout << endl;

    HexadecimalDump(hexadeciaml_dump, n);
    print(hexadeciaml_dump, 7);

    cout << endl;
    cout << hex << n << endl;

    return 0;
}
