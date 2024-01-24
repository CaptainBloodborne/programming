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
	Char operator-(Char);
	Char operator*(Char);
	Char& operator=(const Char& object)
	{
		if (this != &object) number = object.number;
		return *this;
	}
	friend istream& operator>>(istream&, Char&);
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

istream& operator>>(istream& stream, Char& n)
{
	int temporary(0);
	stream >> temporary;
	if (stream.fail()) stream.clear();
	while (stream.get() != '\n');
	n.number = temporary;
	return stream;
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
	cout << "x1? ";
	cin >> hex >> a;					// test 0x34
	cout << "x2? ";
	cin >> hex >> b;					// test 0xb4 (-0x4c)
	cout << "x3? ";
	cin >> hex >> c;					// test 0x6d

	cout << "\nSource number:\n";
	cout << hex << a << endl;			// 34	00110100
	cout << hex << b << endl;			// -4c	10110100
	cout << hex << c << endl;			// 6d	01101101
	d = (a - b) * c;
	cout << "\nResult number:\n";
	cout << dec << d << endl;			// -128	10000000
	cout << hex << d << endl;			// -80	10000000
	return 0;
}
