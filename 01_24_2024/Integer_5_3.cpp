#include <iostream>

using namespace std;

class Integer
{
	int number;

	public:
	Integer(int n = 0) : number(n) {}
	Integer(const Integer& object) : number(object.number) {}
	Integer& operator=(const Integer&);
	Integer operator+(Integer);
	Integer& operator+=(Integer);
	friend istream& operator>>(istream&, Integer&);
	friend ostream& operator<<(ostream&, const Integer&);
};

Integer& Integer::operator=(const Integer& object)
{
	if (this != &object) number = object.number;
	return *this;
}

Integer Integer::operator+(Integer n)
{
	Integer temporary(*this);
	temporary.number += n.number;
	return temporary;
}

Integer& Integer::operator+=(Integer n)
{
	number += n.number;
	return *this;
}

istream& operator>>(istream& stream, Integer& n)
{
	cout << "? ";
	stream >> n.number;
	if (stream.fail()) stream.clear();
	while (stream.get() != '\n');
	return stream;
}

ostream& operator<<(ostream& stream, const Integer& n)
{
	return stream << n.number;
}

int main()
{
	Integer a(1), b(2), c, d(a + b);
	cout << "a = " << a << endl;	// 1
	cout << "b = " << b << endl;	// 2
	cout << "c = " << c << endl;	// 0
	cout << "d = " << d << endl;	// 3
	cin >> c;
	cout << "c = " << c << endl;
	cout << "a + c = " << a + c << endl;
	b = c + d;
	cout << "b = " << b << endl;
	d += c;
	cout << "d = " << d << endl;
	c = d;
	cout << "c = " << c << endl;
	c = b + 1;
	cout << "c = " << c << endl;
	c += 2;
	cout << "c = " << c << endl;

	return 0;
}
