// 8-bit architecture

#include <iostream>
#include <bitset>

using namespace std;

class Char
{
	char number;

	public:
	Char(char n = 0) : number(n)
	{
	}
	Char(const Char& object) : number(object.number)
	{
	}
	Char& operator=(const Char& object)
	{
		if (this != &object) number = object.number;
		return *this;
	}
	void even_bits()
	{
		number ^= 0125;					// Inversion of even bits
	}
	void odd_bits()
	{
		number ^= 0252;					// Inversion of even bits
	}
	friend ostream& operator<<(ostream&, const Char&);
};

ostream& operator<<(ostream& stream, const Char& n)
{
	stream << int(n.number);
	stream << '\t';
	stream << bitset<8>(n.number);
	return stream;
}

int main()
{
	Char a(-17), b(17), c(a), d(b);

	cout << "Source number:\n";
	cout << a << endl;			// -17	11101111
	cout << c << endl;			// -17	11101111
	cout << b << endl;			// 17	00010001
	cout << d << endl;			// 17	00010001
	cout << "\nResult number:\n";
	a.even_bits();
	cout << a << endl;			// -70	10111010
	c.odd_bits();
	cout << c << endl;			// 69	01000101
	b.even_bits();
	cout << b << endl;			// 68	01000100
	d.odd_bits();
	cout << d << endl;			// -69	10111011

	return 0;
}
