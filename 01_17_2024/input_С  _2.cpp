// Programming in C++ Style

#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	int n(0);  // default value

	cout << "Programming in C++ style\n";
	do
	{
		cout << "Number [-128, 127]? ";
		cin >> n;
		if (cin.fail()) cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	while (!(n >= -128 && n <= 127));
	cout << n << endl;

	return 0;
}
