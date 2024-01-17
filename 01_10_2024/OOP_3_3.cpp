#include <iostream>

using namespace std;

class Double
{
	public:
	double number;

	Double()
	{
		number = 0.0;
		cout << "It's my default constructor" << endl;
		cout << "Hello, " << this << endl;
	}

	Double(const Double& object)
	{
		number = object.number;
		cout << "It's my copy constructor" << endl;
		cout << "Hello, " << this << endl;
	}
	~Double()
	{
		cout << "It's my destructor" << endl;
		cout << "Bye, " << this << endl;
	}
};

int main()
{
	Double a;
	cout << "a = " << a.number << endl;				// 0
	a.number = 1.2;
	cout << "a = " << a.number << endl;				// 1.2
	Double b = a;
	cout << "b = " << b.number << endl;				// 1.2
	Double c(b);
	cout << "c = " << c.number << endl;				// 1.2

	return 0;
}
