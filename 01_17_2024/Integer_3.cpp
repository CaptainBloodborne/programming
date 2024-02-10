#include <iostream>

using namespace std;

class Integer
{
	int number;

	public:
	Integer(int n = 0) : number(n) {}
	friend istream& operator>>(istream&, Integer&);
	friend ostream& operator<<(ostream&, const Integer&);
};

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
	Integer a(1), b(2), c;
	cout << "a = " << a << endl;	// 1
	cout << "b = " << b << endl;	// 2
	cout << "c = " << c << endl;	// 0
	cin >> c;
	cout << "c = " << c << endl;

	return 0;
}
