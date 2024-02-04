// Bitwise logical operations

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	int n(0);
	int target(0);

	do
	{
		cout << "Number [-128, 127]? ";
		cin >> n;
		if (cin.fail())
		{
			cin.clear();
			while (cin.get() != '\n');
		}
	}
	while (!(n >= -128 && n <= 127));
	do
	{
		cout << "Even or odd bits [0 - even, 1 - odd]? ";
		cin >> target;
		if (cin.fail())
		{
			cin.clear();
			while (cin.get() != '\n');
		}
	}
	while (!(target == 0 || target == 1));
	cout << "\nSource number:\n";
	cout << n << endl;
	cout << bitset<8>(n) << endl;
	n &= 0377;
	if (!target)
	{
		n ^= 0125;							// Inversion of even bits
		if (n & 0200) n ^= 037777777400;
	}
	else
	{
		n ^= 0252;							// Inversion of odd bits
		if (n & 0200) n ^= 037777777400;
	}
	cout << "\nResult number:\n";
	cout << n << endl;
	cout << bitset<8>(n) << endl;

	return 0;
}
