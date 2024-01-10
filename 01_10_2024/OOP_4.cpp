#include <iostream>

class Double
{
	public:
	double number;
};

int main()
{
	using namespace std;

	Double a;
	a.number = 1.2;
	cout << "a = " << a.number << endl;		// 1.2
	Double b;
	b = a;
	cout << "b = " << b.number << endl;		// 1.2

	return 0;
}
