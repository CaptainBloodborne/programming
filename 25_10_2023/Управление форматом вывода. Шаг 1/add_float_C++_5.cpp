// Programming in C++ Style

#include <iostream>

int main()
{
	using namespace std;
	cout.precision(2);
	cout << scientific << 1.2 + 2.3 << endl;  // 3.50e+00 scientific format
	return 0;
}
