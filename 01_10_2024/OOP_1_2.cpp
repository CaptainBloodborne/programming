#include <iostream>

class Double
{
	public:
	double number;

	Double(double d = 0.0) {
		number = 2.0;
	}
	Double add(Double, Double);
};

Double Double::add(Double a, Double b)
{
	Double temporary;
	temporary.number = a.number + b.number;
	return temporary;
}

int main()
{
	using namespace std;

	Double a(1.2), b(2.3), c;
	cout << "a = " << a.number << endl;		// 1.2
	cout << "b = " << b.number << endl;		// 2.3
	cout << "c = " << c.number << endl;		// 0
	c = a.add(a, b);
	cout << "c = " << c.number << endl;		// 3.5
	a.number = 3.4;
	b.number = 4.5;
	cout << "a = " << a.number << endl;		// 3.4
	cout << "b = " << b.number << endl;		// 4.5
	c = a.add(a, b);
	cout << "c = " << c.number << endl;		// 7.9

	return 0;
}
