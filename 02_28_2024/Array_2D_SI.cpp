// C++ Single Inheritance
// C++ Abstract Data Type - Protected Array

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Array1D
{
	int* base1D;

	protected:
	int size1D;

	public:
	Array1D(int*, int);
	Array1D(int);
	Array1D(const Array1D&);
	~Array1D();
	void allocate1D(int);
	int& operator[](int);
	friend ostream& operator<<(ostream&, Array1D&);
	Array1D& operator=(const Array1D&);
};

inline Array1D::Array1D(int* base = 0, int size = 0) :
	base1D(base), size1D(size) {}

Array1D::Array1D(int rowSize)
{
	allocate1D(rowSize);
}

Array1D::Array1D(const Array1D& array)
{
	base1D = new int[size1D = array.size1D];
	for (int i = 0; i < size1D; ++i) base1D[i] = array.base1D[i];
}

inline Array1D::~Array1D()
{
	delete[] base1D;
}

void Array1D::allocate1D(int rowSize)
{
	base1D = new int[size1D = rowSize];
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

ostream& operator<<(ostream& stream, Array1D& array)
{
	for (int i = 0; i < array.size1D; ++i)
		stream << setw(3) << array.base1D[i];
	stream << endl;
	return stream;
}

Array1D& Array1D::operator=(const Array1D& array)
{
	if (this != &array)
	{
		if (size1D != array.size1D)
		{
			delete[] base1D;
			base1D = new int[size1D = array.size1D];
		}
		for (int i = 0; i < size1D; ++i) base1D[i] = array.base1D[i];
	}
	return *this;
}

class Array2D : public Array1D
{
	Array1D* base2D;
	int size2D;

	public:
	Array2D(int, int);
	Array2D(const Array2D&);
	~Array2D();
	void allocate2D(int, int);
	Array1D& operator[](int);
	friend ostream& operator<<(ostream&, Array2D&);
	Array2D& operator=(const Array2D&);
};

Array2D::Array2D(int columnSize, int rowSize) :
	Array1D(0, rowSize)
{
	allocate2D(columnSize, rowSize);
}

Array2D::Array2D(const Array2D& array)
{
	size1D = array.size1D;
	base2D = new Array1D[size2D = array.size2D];
	for (int i = 0; i < size2D; ++i)
	{
		base2D[i].allocate1D(size1D);
		for (int j = 0; j < size1D; ++j)
			base2D[i][j] = array.base2D[i][j];
	}
}

inline Array2D::~Array2D()
{
	delete[] base2D;
}

void Array2D::allocate2D(int columnSize, int rowSize)
{
	base2D = new Array1D[size2D = columnSize];
	for (int i = 0; i < size2D; ++i)
		base2D[i].allocate1D(rowSize);
}

Array1D& Array2D::operator[](int index)
{
	if (index < 0 || index > size2D - 1)
	{
		cerr << "Array index is out of range!" << endl;
		exit(1);
	}
	return base2D[index];
}

ostream& operator<<(ostream& stream, Array2D& array)
{
	for (int i = 0; i < array.size2D; ++i)
	{
		for (int j = 0; j < array.size1D; ++j)
			stream << setw(3) << array.base2D[i][j];
		stream << endl;
	}
	return stream;
}

Array2D& Array2D::operator=(const Array2D& array)
{
	if (this != &array)
	{
		int i, j;
		if (size2D != array.size2D || size1D != array.size1D)
		{
			delete[] base2D;
			size1D = array.size1D;
			base2D = new Array1D[size2D = array.size2D];
			for (i = 0; i < size2D; ++i)
				base2D[i].allocate1D(size1D);
		}
		for (i = 0; i < size2D; ++i)
			for (j = 0; j < size1D; ++j)
				base2D[i][j] = array.base2D[i][j];
	}
	return *this;
}

int main()
{
	Array1D a(5);
	int i, j;

	for (i = 0; i < 5; ++i) a[i] = i;
	cout << a << endl;

	Array1D b(a);
	cout << b << endl;

	Array1D c(3);
	c = b;
	cout << c << endl;

	Array2D d(3, 4);
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 4; ++j) d[i][j] = i + j;
	cout << d << endl;

	Array2D e(d);
	cout << e << endl;

	Array2D f(2, 3);
	f = e;
	cout << f;

	return 0;
}
