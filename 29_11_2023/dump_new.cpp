#include <iostream>
#include <bitset>
#include <limits>

using namespace std;

int IntPow(int b, int p)
{
    if (p == 0) return 1;

    if (p == 1) return b;

    int n(b);
    do 
    {
        n *= b;
        --p;
    }
    
    while (p > 1);

    return n;
}

void print(char* pointer, int n)
{
    do 
    {
        cout << pointer[n];
        --n;
    } 
    while (n >= 0);

    cout << endl;
}

void BinaryDump(char* pointer, int n)
{
    int mask(010000000000);

    pointer[31] = (n < 0 ? '1' : '0');

    for (int i(0); i < 31; ++i, mask >>= 1)
    {
        pointer[30 - i] = (n & mask ? '1' : '0');
    }
}

int BinaryDumpRestore(char* pointer)
{
    int n = (0);

    for (int i(0); i < 32; ++i)
    {
        n += (int(pointer[i]) - 48) * IntPow(2, i);
    }

    cout << dec;

    if (pointer[31] > '0')
    {
        return -(~n + 1);
    }
    else
    {
        return n;
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

int OctalDumpRestore(char* pointer)
{
    int n(0);

	for (int i(0); i < 11; ++i)
    {
        n += (int(pointer[i]) - 48) << (i * 3);
    }

    cout << dec;

    if (pointer[10] > '1')
    {
        return -(~n + 1);
    }
    else
    {
        return n;
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

int HexadecimalDumpRestore(char* pointer)
{
    int n(0);

    for (int i(0); i < 8; ++i)
    {
        int digit(static_cast<int>(pointer[i]));
        n += (digit > 57 ? digit - 87 : digit - 48) * IntPow(16, i);
    }

    cout << dec;

    if (pointer[7] > '7')
    {
        return -(~n + 1);
    }
    else
    {
        return n;
    }
}

int main(){

    int n(0);

    char binary_dump[32];

    char octal_dump[11];

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

    cout << "Source data: " << n << endl;

    cout << endl;

    BinaryDump(binary_dump, n);
    cout << "Binary dump (user function and array): ";
    print(binary_dump, 31);
    cout << "Binary dump (bitset): "<< bitset<32>(n) << endl;
    cout << "Restoring number from binary dump: " << BinaryDumpRestore(binary_dump) << endl;

    cout << endl;

    OctalDump(octal_dump, n);
    cout << "Octal dump (user function and array): ";
    print(octal_dump, 10);
    cout << "Octal dump (oct manipulator): " << oct << n << endl;
    cout << "Restoring number from octal dump: " << OctalDumpRestore(octal_dump) << endl;

    cout << endl;

    HexadecimalDump(hexadecimal_dump, n);
    cout << "Hexadecimal dump (user function and array): ";
    print(hexadecimal_dump, 7);
    cout << "Hexadecimal dump (hex manipulator): " << hex << n << endl;
    cout << "Restoring number from hexadecimal dump: " << HexadecimalDumpRestore(hexadecimal_dump) << endl;

    return 0;
}
