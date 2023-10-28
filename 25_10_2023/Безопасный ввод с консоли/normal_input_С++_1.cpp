// Programming in C++ Style

#include <iostream>

int main()
{
	using namespace std;

	int n(0);  // default value

	cout << "Programming in C++ style" << endl;
	do
	{
		cout << "Number [-128, 127]? ";
		cin >> n;
		if (cin.fail()) cin.clear();
		while (cin.get() != '\n');
	}
	while (!(n >= -128 && n <= 127));
	cout << n << endl;

	return 0;
}
