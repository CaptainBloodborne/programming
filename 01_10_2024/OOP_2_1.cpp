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
};

int main()
{
	Double a;
	cout << "a = " << a.number << endl;					// 0
	Double b;
	cout << "b = " << b.number << endl;					// 0
	a.number = 1.2;
	b.number = 2.3;
	cout << "a = " << a.number << endl;					// 1.2
	cout << "b = " << b.number << endl;					// 2.3
	cout << "a + b = " << a.number + b.number << endl;	// 3.5

	return 0;
}
