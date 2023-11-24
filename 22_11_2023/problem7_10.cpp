//C++ One-dimensional Array

#include <iostream>

using namespace std;

void print(int* pointer, int n)
{
	for (int i = 0; i < n; ++i)
		cout << pointer[i] << endl;
}

int main()
{
	const int n = 4;
	int a[n] = { 1, 2, 3 };

	cout << "sizeof a: " << sizeof a << endl;
	a[3] = 4;

	print(a, 1);
	cout << endl;

	print(a, 2);
	cout << endl;

	print(a, n);
	cout << endl;
	
	print(&a[1], 2);
	return 0;
}
