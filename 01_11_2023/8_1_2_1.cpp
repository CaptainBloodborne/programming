// Bitwise logical operations

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	int n (-17);

	cout << "Source number:\n";
	cout << n << endl;
	cout << bitset<8>(n) << endl;

	n &= 0377;
	cout << '\n' << oct << n << endl;
	cout << bitset<8>(n) << endl;
	n ^= 0125;							// Inversion of even bits
	cout << '\n' << oct << n << endl;
	cout << bitset<8>(n) << endl;
	n ^= 037777777400;

	cout << "\nResult number:\n";
	cout << dec << n << endl;
	cout << oct << n << endl;
	cout << bitset<8>(n) << endl;

	return 0;
}
