#include <iostream>

class Double
{
	public:
	double number;
};

int main()
{
	using namespace std;

	// Копирование по умолчанию
	Double a;
	a.number = 1.2;
	cout << "a = " << a.number << endl;				// 1.2
	Double b = a;
	cout << "b = " << b.number << endl;				// 1.2
	Double c(b);
	cout << "c = " << c.number << endl;				// 1.2

	return 0;
}
