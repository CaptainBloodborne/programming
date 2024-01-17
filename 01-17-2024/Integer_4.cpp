#include <iostream>

using namespace std;

class Integer
{
	int number;

	public:
	Integer(int n = 0) : number(n) {}
	Integer operator+(Integer);
	friend istream& operator>>(istream&, Integer&);
	friend ostream& operator<<(ostream&, Integer);
};

Integer Integer::operator+(Integer n)
{
	Integer temporary(*this);
	temporary.number += n.number;
	return temporary;
}

istream& operator>>(istream& stream, Integer& n)
{
	cout << "? ";
	stream >> n.number;
	if (stream.fail()) stream.clear();
	while (stream.get() != '\n');
	return stream;
}

ostream& operator<<(ostream& stream, Integer n)
{
	return stream << n.number;
}

int main()
{
	Integer a(1), b(2), c;
	cout << "a = " << a << endl;	// 1
	cout << "b = " << b << endl;	// 2
	cout << "c = " << c << endl;	// 0
	cin >> c;
	cout << "c = " << c << endl;
	cout << "a + c = " << a + c << endl;
	cout << "b + c = " << b + c << endl;

	return 0;
}
