#include <iostream>
#include <bitset>
#include <typeinfo>

int main()
{
	using namespace std;

	// int x(180);
	int x2(856);
	char x3 (127);
	char x4(1);
	char x;
	int y(0xff7);

	char z;
	cout << "Input: " << int(char(y)) << endl;
	// char x3(0xc4);
	// char x4(0x6d);
	// char y;

	// y = (x2 - x3) * x4;

	// int y_m = y & 0377;

	// cout << int(y) << endl;
	// cout << int(y_m) << endl;

	// int x1 = x & 0377;

	cout << (x2) << "\t" << (~x2) + 1 << endl;
	cout << (x2 & 0377) << "\t" << ((~x2 + 1) & 0377) << endl;
	// cout << oct << x1 << "\t" << (~x1 & 0377) + 1 << endl;

	x = x3 + x4;
	auto x_m = x & 0377;
	cout << bitset<8>(x) << endl;
	cout << (x & 0200) << endl;
	cout << "x_m: " << typeid(x_m).name();
	cout << (x & 0377) << endl;
	cout << ~x << endl;

	return 0;
}
