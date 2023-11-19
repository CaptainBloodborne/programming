// C++ Instructions
// Binary dump

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	int n(13);

	cout << n << endl;

	cout << bitset<32>(n) << endl;

	for (int i = 0; i < 32; ++i, n <<= 1)
		cout << (n < 0 ? '1' : '0');		// 31 - 0
	cout << endl;

	return 0;
}
