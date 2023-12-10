#include <iostream>

using namespace std;

int main()
{
    int mask(0xffffffff);
    int n(-2147483648);

	cout << ~((n ^ mask)) << endl;
	return 0;
}
