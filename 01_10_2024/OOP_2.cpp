#include <iostream>

class Double
{
	public:
	double number;
};

int main()
{
	using namespace std;

	Double a, b;
	a.number = 1.2;
	b.number = 2.3;
	cout << "a = " << a.number << endl;					// 1.2
	cout << "b = " << b.number << endl;					// 2.3
	cout << "a + b = " << a.number + b.number << endl;	// 3.5

	return 0;
}
