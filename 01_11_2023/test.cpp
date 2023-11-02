#include <iostream>

int main()
{
	using namespace std;

	char x1(0x34);
	char x2(0xb4);
	char x3(0x6d);
	char x;

    cout << (((x1 - x2) * x3) & 0377) << endl;


	return 0;
}
