// C++ Abstract Data Type - Protected Two-Dimensional Array

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Array2D
{
	class Array1D
	{
		int* base1D;
		int size1D;

		public:
		Array1D();
		~Array1D();
		void allocate1D(int);
		int& operator[](int);
	};
	Array1D* base2D;
	int size2D;

	public:
	Array2D(int, int);
	~Array2D();
	Array1D& operator[](int);
};

Array2D::Array2D(int columnSize, int rowSize)
{
	base2D = new Array1D[size2D = columnSize];
	for (int i = 0; i < size2D; ++i) base2D[i].allocate1D(rowSize);
}

inline Array2D::~Array2D()
{
	delete[] base2D;
}

Array2D::Array1D& Array2D::operator[](int index)
{
	if (index < 0 || index > size2D - 1)
	{
		cerr << "First array index is out of range!" << endl;
		exit(1);
	}
	return base2D[index];
}

inline Array2D::Array1D::Array1D()
{
	base1D = 0;
	size1D = 0;
}

inline Array2D::Array1D::~Array1D()
{
	delete[] base1D;
}

void Array2D::Array1D::allocate1D(int rowSize)
{
	base1D = new int[size1D = rowSize];
}

int& Array2D::Array1D::operator[](int index)
{
	if (index < 0 || index > size1D - 1)
	{
		cerr << "Second array index is out of range!" << endl;
		exit(1);
	}
	return base1D[index];
}

int main()
{
	Array2D a(3, 4);

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			a[i][j] = i + j;
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}

	cout << a[3][0] << endl;

	return 0;
}
