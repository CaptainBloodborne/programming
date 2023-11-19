// C++ Instructions
// Binary dump

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	int n(13);
	int mask(010000000000);

	cout << n << endl;

	cout << bitset<32>(n) << endl;

	cout << (n < 0 ? '1' : '0');				// 31
	for (int i = 0; i < 31; ++i, mask >>= 1)
		cout << (n & mask ? '1' : '0');			// 30 - 0
	cout << endl;

	return 0;
}
