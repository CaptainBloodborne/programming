// Programming in C++ Style

#include <iostream>

using namespace std;

class Double
{
	double number;

	public:
	Double(double d = 0.0) : number(d) {}
	Double operator+(Double);
	friend ostream& operator<<(ostream&, Double);
};

Double Double::operator+(Double a)
{
	Double temporary(*this);
	temporary.number += a.number;
	return temporary;
}

ostream& operator<<(ostream& stream, Double d)
{
	return stream << d.number;
}

int main()
{
	Double a(1.2), b(2.3), c(a + b);
	cout << a << endl;			// 1.2
	cout << b << endl;			// 2.3
	cout << c << endl;			// 3.5
	cout << a + b << endl;			// 3.5

	return 0;
}
