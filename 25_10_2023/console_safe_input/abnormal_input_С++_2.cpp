// Programming in C++ Style

#include <iostream>

int main()
{
	using namespace std;

	int n;        // memory class - auto
	char answer;  // memory class - auto

	cout << "Programming in C++ style" << endl;
	do
	{
		repeat:
		cout << "Number [-128, 127]? ";
		cin >> n;
		cout << "Repeat input (y or Y)? ";
		cin >> answer;
		if ((answer == 'y') || (answer == 'Y')) goto repeat;
	}
	while (!(n >= -128 && n <= 127));
	cout << n << endl;

	return 0;
}
