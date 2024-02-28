// C++ Abstract Data Type - Protected Three-Dimensional Array

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Array3D
{
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
		Array2D();
		~Array2D();
		void allocate2D(int, int);
		Array1D& operator[](int);
	};
	Array2D* base3D;
	int size3D;

	public:
	Array3D(int, int, int);
	~Array3D();
	Array2D& operator[](int);
};

Array3D::Array3D(int numberOfArrays2D, int columnSize,
                 int rowSize)
{
	base3D = new Array2D[size3D = numberOfArrays2D];
	for (int i = 0; i < size3D; ++i)
		base3D[i].allocate2D(columnSize, rowSize);
}

inline Array3D::~Array3D()
{
	delete[] base3D;
}

Array3D::Array2D& Array3D::operator[](int index)
{
	if (index < 0 || index > size3D - 1)
	{
		cerr << "First array index is out of range!" << endl;
		exit(1);
	}
	return base3D[index];
}

inline Array3D::Array2D::Array2D()
{
	base2D = 0;
	size2D = 0;
}

inline Array3D::Array2D::~Array2D()
{
	delete[] base2D;
}

void Array3D::Array2D::allocate2D(int columnSize, int rowSize)
{
	base2D = new Array1D[size2D = columnSize];
	for (int i = 0; i < size2D; ++i)
		base2D[i].allocate1D(rowSize);
}

Array3D::Array2D::Array1D& Array3D::Array2D::operator[](int index)
{
	if (index < 0 || index > size2D - 1)
	{
		cerr << "Second array index is out of range!" << endl;
		exit(1);
	}
	return base2D[index];
}

inline Array3D::Array2D::Array1D::Array1D()
{
	base1D = 0;
	size1D = 0;
}

inline Array3D::Array2D::Array1D::~Array1D()
{
	delete[] base1D;
}

void Array3D::Array2D::Array1D::allocate1D(int rowSize)
{

	base1D = new int[size1D = rowSize];
}

int& Array3D::Array2D::Array1D::operator[](int index)
{
	if (index < 0 || index > size1D - 1)
	{
		cerr << "Third array index is out of range!" << endl;
		exit(1);
	}
	return base1D[index];
}

int main()
{
	Array3D a(2, 3, 4);

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 4; ++k)
			{
				a[i][j][k] = i + j + k;
				cout << setw(3) << a[i][j][k];
			}
			cout << endl;
		}
		cout << endl;
	}

	cout << a[2][0][0] << endl;

	return 0;
}
