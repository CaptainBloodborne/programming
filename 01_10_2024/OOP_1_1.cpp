#include <iostream>

using namespace std;

class Double
{
	double number;

	public:
	Double(double d = 0.0) : number(d) {}
	Double add(Double, Double);
	void print(Double);
};

Double Double::add(Double a, Double b)
{
	Double temporary;
	temporary.number = a.number + b.number;
	return temporary;
}

void Double::print(Double d)
{
	cout << d.number << endl;
}

int main()
{
	Double a(1.2), b(2.3), c;
	cout << "a = ";
	a.print(a);					// 1.2
	cout << "b = ";
	b.print(b);					// 2.3
	cout << "c = ";
	c.print(c);					// 0
	cout << "a + b = ";
	a.print(a.add(a, b));		// 3.5

	return 0;
}
