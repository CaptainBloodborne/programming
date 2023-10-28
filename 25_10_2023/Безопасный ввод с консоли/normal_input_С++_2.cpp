// Programming in C++ Style

#include <iostream>

int main()
{
	using namespace std;

	int n(0);  // default value
	char answer;

	cout << "Programming in C++ style" << endl;
	do
	{
		repeat:
		cout << "Number [-128, 127]? ";
		cin >> n;
		if (cin.fail()) cin.clear();
		while (cin.get() != '\n');
		cout << "Repeat input (y or Y)? ";
		cin >> answer;
		while (cin.get() != '\n');
		if ((answer == 'y') || (answer == 'Y')) goto repeat;
	}
	while (!(n >= -128 && n <= 127));
	cout << n << endl;

	return 0;
}
