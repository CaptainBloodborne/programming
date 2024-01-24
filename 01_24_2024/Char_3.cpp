// 8-bit arithmetic

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
	void set(char value = 0)
	{
		number = value;
	}
	Char operator-(Char);
	Char operator*(Char);
	Char& operator=(const Char& object)
	{
		if (this != &object) number = object.number;
		return *this;
	}
	friend ostream& operator<<(ostream&, const Char&);
};

Char Char::operator-(Char n)
{
	Char temporary(*this);
	temporary.number -= n.number;
	return temporary;
}

Char Char::operator*(Char n)
{
	Char temporary(*this);
	temporary.number *= n.number;
	return temporary;
}

ostream& operator<<(ostream& stream, const Char& n)
{
	char temporary = n.number;
	if (temporary & 0x80)
		stream << '-' << int(~temporary + 1);
	else
		stream << int(temporary);
	stream << '\t';
	stream << bitset<8>(temporary);
	return stream;
}

int main()
{
	Char a, b, c, d;
	a.set(0x34);
	b.set(-0x4c);					// -0x4c или 0xb4
	c.set(0x6d);
	cout << "Source number:\n";
	cout << hex << a << endl;		// 34	00110100
	cout << hex << b << endl;		// -4c	10110100
	cout << hex << c << endl;		// 6d	01101101
	d = (a - b) * c;
	cout << "\nResult number:\n";
	cout << dec << d << endl;		// -128 10000000
	cout << hex << d << endl;		// -80	10000000
	return 0;
}
