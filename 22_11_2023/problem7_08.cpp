//C++ One-dimensional Array

#include <iostream>

using namespace std;

const int n = 3;

void print(int array[n])
{
	for (int i = 0; i < n; ++i)
		cout << array[i] << endl;
}

int main()
{
	int a[n] = { 1, 2, 3 };
	print(a);
	return 0;
}
