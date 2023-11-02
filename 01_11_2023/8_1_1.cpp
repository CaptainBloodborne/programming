#include <iostream>

int main()
{
	using namespace std;

	char x1(0x34);
	char x2(0xb4);
	char x3(0x6d);
	char x;

	cout << "Source data:\n";
	cout << "x1 = " << hex << int(x1 & 0377);
	if (x1 & 0200) cout << " (-" << int(~x1 + 1) << ')';
	cout << endl;
	cout << "x2 = " << int(x2 & 0377);
	if (x2 & 0200) cout << " (-" << int(~x2 + 1) << ')';
	cout << endl;
	cout << "x3 = " << int(x3 & 0377);
	if (x3 & 0200) cout << " (-" << int(~x3 + 1) << ')';
	cout << endl;
	cout << "\nResult data:\n";
	x = (x1 - x2) * x3;
	cout << dec << int(x) << endl;			// -128
	cout << hex << int(x & 0377) << endl;	// 80

	return 0;
}
