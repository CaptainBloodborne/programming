#include <iostream>

using namespace std;

int main()
{
	union
	{
		float f;
		int a[1];
	};
	f = 122.0;

    cout << a[2] << endl;
	cout << endl;

	return 0;
}