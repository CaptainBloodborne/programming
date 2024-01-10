#include <iostream>

using namespace std;

class Double
{
	double number;

	public:
	Double(double d = 0.0) : number(d) {}
	Double add(Double, Double);
	friend ostream& operator<<(ostream&, Double);
};

Double Double::add(Double a, Double b)
{
	Double temporary;
	temporary.number = a.number + b.number;
	return temporary;
}

ostream& operator<<(ostream& stream, Double d)
{
	return stream << d.number;
}

int main()
{
	Double a(1.2), b(2.3), c;
	cout << "a = " << a << endl;					// 1.2
	cout << "b = " << b << endl;					// 2.3
	cout << "c = " << c << endl;					// 0
	cout << "a + b = " << a.add(a, b) << endl;		// 3.5
	cout << "a + b = " << b.add(a, b) << endl;		// 3.5
	cout << "a + b = " << c.add(a, b) << endl;		// 3.5

	return 0;
}
