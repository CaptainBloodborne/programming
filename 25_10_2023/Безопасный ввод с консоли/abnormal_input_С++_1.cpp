// Programming in C++ Style

#include <iostream>

int main()
{
	using namespace std;

	int n;  // memory class - auto

	cout << "Programming in C++ style" << endl;
	do
	{
		cout << "Number [-128, 127]? ";
		cin >> n;
	}
	while (!(n >= -128 && n <= 127));
	cout << n << endl;

	return 0;
}
