#include <iostream>

using namespace std;

int main()
{
	union
	{
		float d;
		short int a[8];
	};
	d = 122.64563;

	cout << a[4] << endl;
	return 0;
}
