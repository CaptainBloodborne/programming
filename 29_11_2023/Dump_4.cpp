#include <iostream>

using namespace std;

void HexadecimalDump(short int n)
{
	short int mask(0xf00);
	short int digit((n >> 12) & 0xf);

	cout << (digit > 9 ? char(digit + 87) : char(digit + 48));		// 3
	for (int i = 0; i < 3; ++i, mask >>= 4)
	{
		digit = (n & mask) >> 8 - i * 4;
		cout << (digit > 9 ? char(digit + 87) : char(digit + 48));	// 2 - 0
	}
}

int main()
{
	double d(0.1);
	double* pDouble = &d;
	short int* p = reinterpret_cast<short int*>(pDouble);

	HexadecimalDump(p[3]);
	HexadecimalDump(p[2]);
	HexadecimalDump(p[1]);
	HexadecimalDump(p[0]);
	cout << endl;

	return 0;
}
