// C++ Instructions
// Octal dump

#include <iostream>

using namespace std;

void OctalDump(int n)
{
	int mask(07000000000);

	cout << char(((n >> 30) & 03) + 48);				// 10
	for (int i = 0; i < 10; ++i, mask >>= 3)
		cout << char(((n & mask) >> 27 - i * 3) + 48);	// 9 - 0
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

	OctalDump(n);

	cout << oct << '\n' << n << endl;

	return 0;
}
