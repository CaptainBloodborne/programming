// C++ Standard Operators
// Binary dump

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	int n(13);
	
	cout << n << endl;

	cout << bitset<32>(n) << endl;

	int mask(010000000000);

	cout << (n < 0 ? '1' : '0');			// 31
	cout << ((n & mask) != 0 ? '1' : '0');	// 30
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 29
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 28
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 27
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 26
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 25
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 24
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 23
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 22
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 21
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 20
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 19
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 18
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 17
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 16
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 15
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 14
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 13
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 12
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 11
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 10
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 9
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 8
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 7
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 6
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 5
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 4
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 3
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 2
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0');	// 1
	mask >>= 1;
	cout << ((n & mask) != 0 ? '1' : '0')
		 << endl;							// 0

	return 0;
}
