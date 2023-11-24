// C++ Instructions
// Hexadecimal dump

#include <iostream>

using namespace std;

void HexadecimalDump(int n)
{
	int mask(0xf000000);
	int digit((n >> 28) & 0xf);

	cout << (digit > 9 ? char(digit + 87) : char(digit + 48));		// 7
	for (int i = 0; i < 7; ++i, mask >>= 4)
	{
		digit = (n & mask) >> 24 - i * 4;
		cout << (digit > 9 ? char(digit + 87) : char(digit + 48));	// 6 - 0
	}
	cout << endl;
}

int main()
{
	int n;

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
			while(cin.get() != '\n');
		}
	}
	while (1);

	HexadecimalDump(n);

	cout << hex << '\n' << n << endl;

	return 0;
}
