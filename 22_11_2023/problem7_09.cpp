//C++ One-dimensional Array

#include <iostream>

using namespace std;

void print(int array[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << array[i] << endl;
}

int main()
{
	const int n = 3;
	int a[n] = { 1, 2, 3 };
	print(a, 1);
	cout << endl;
	print(a, 2);
	cout << endl;
	print(a, n);
	return 0;
}
