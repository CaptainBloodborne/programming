#include <iostream>
#include <string>

using namespace std;

int main()
{
	union
	{
		float d;
		char a[32];
	};
	d = 122.64563;

	cout << a[10] << endl;
	return 0;
}
