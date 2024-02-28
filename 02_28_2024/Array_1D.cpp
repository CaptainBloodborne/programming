// C++ Abstract Data Type - Protected One-Dimensional Array

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Array1D
{
	int* base1D;
	int size1D;

	public:
	Array1D(int);
	~Array1D();
	int& operator[](int);
};

inline Array1D::Array1D(int size)
{
	base1D = new int[size1D = size];
}

inline Array1D::~Array1D()
{
	delete[] base1D;
}

int& Array1D::operator[](int index)
{
	if (index < 0 || index > size1D - 1)
	{
		cerr << "Array index is out of range!" << endl;
		exit(1);
	}
	return base1D[index];
}

int main()
{
	Array1D a(5);

	for (int i = 0; i < 5; ++i)
	{
		a[i] = i;
		cout << setw(3) << a[i];
	}
	cout << endl;

	cout << a[5] << endl;

	return 0;
}
