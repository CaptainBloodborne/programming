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
	}

	Double(const Double& object)
	{
		number = object.number;
		cout << "It's my copy constructor" << endl;
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
