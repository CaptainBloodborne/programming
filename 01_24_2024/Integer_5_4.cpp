#include <iostream>

using namespace std;

class Integer
{
	int number;

	public:
	Integer(int n = 0) : number(n) {
		cout << "Init - " << this << endl;
	}
	Integer(const Integer& object) : number(object.number)
	{
		cout << "This is: "<< this << " = " << *this <<" It's my copy constructor - " << &object << " = " << object << endl;
	}
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
	cout << "Adding " << this << " with " << &n << " = " << n << endl;
	Integer temporary(*this);
	cout << "After temp init " <<  &temporary << endl;
	temporary.number += n.number;
	cout << "After +=" << endl;
	return temporary;
}

Integer& Integer::operator+=(Integer n)
{
	cout << "call += for " << &n << endl;
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
	cout << "d address - " << &d << endl;

    cout << a + b << endl;

	cout << "a = " << a << endl;	// 1
	cout << "b = " << b << endl;	// 2
	cout << "c = " << c << endl;	// 0
	// cout << "d = " << d << endl;	// 3
	cin >> c;
	cout << "c = " << c << endl;
	cout << "a + c = " << a + c << endl;
	// b = c + d;
	cout << "b = " << b << endl;
	// d += c;
	// cout << "d = " << d << endl;
	// c = d;
	cout << "c = " << c << endl;
	c = b + 1;
	cout << "c = " << c << endl;
	c += 2;
	cout << "c = " << c << endl;

	return 0;
}
