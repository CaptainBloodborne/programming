#include <iostream>

using namespace std;

class Double
{
	public:
	double number;

	Double& operator=(const Double&);
};

Double& Double::operator=(const Double& object)
{
	cout << "It's my copy assignment operator" << endl;
	if (this != &object) number = object.number; // this - скрытый указатель объекта, неявно передается в фукнцию-член класса 
	return *this;
}

int main()
{
	Double a;
	a.number = 1.2;
	cout << "a = " << a.number << endl;		// 1.2
	Double b;
	b = a;
	cout << "b = " << b.number << endl;		// 1.2

	return 0;
}
