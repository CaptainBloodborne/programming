// C++ Functions
// Binary dump

#include <iostream>
#include <bitset>

using namespace std;

void BinaryDump(int n)
{
	int mask(010000000000);

	cout << (n < 0 ? '1' : '0');			// 31
	for (int i = 0; i < 31; ++i, mask >>= 1)
		cout << (n & mask ? '1' : '0');		// 30 - 0
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

	BinaryDump(n);

	cout << '\n' << bitset<32>(n) << endl;

	return 0;
}
