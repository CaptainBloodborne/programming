#include <iostream>
#include <bitset>

using namespace std;

class Char
{
	char symbol;

	public:
	Char(char literal = '0') : symbol(literal)
	{
	}
	Char(const Char& object) : symbol(object.symbol)
	{
	}
	Char& operator=(const Char& object)
	{
		if (this != &object) symbol = object.symbol;
		return *this;
	}
	friend ostream& operator<<(ostream&, const Char&);
};

ostream& operator<<(ostream& stream, const Char& literal)
{
	stream << literal.symbol;
	stream << '\t';
	stream << bitset<8>(literal.symbol);
	return stream;
}

int main()
{
	Char a('1'), b('2'), c, d(a);
	cout << a << endl;			// 1	00110001
	cout << b << endl;			// 2	00110010
	cout << c << endl;			// 0	00110000
	cout << d << endl;			// 1	00110001
	c = b;
	cout << c << endl;			// 2	00110010

	return 0;
}
