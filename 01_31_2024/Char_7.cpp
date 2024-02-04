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
	friend istream& operator>>(istream&, Char&);
	friend ostream& operator<<(ostream&, const Char&);
};

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
	stream << int(n.number);
	stream << '\t';
	stream << bitset<8>(n.number);
	return stream;
}

int main()
{
	Char a, b;

	cout << "[-128, 127]? ";
	cin >> a;			// test -17 or 17
	b = a;
	cout << "Source number:\n";
	cout << a << endl;		// -17	11101111 or 17	00010001
	cout << b << endl;		// -17	11101111 or 17	00010001
	cout << "\nResult number:\n";
	a.even_bits();
	cout << a << endl;		// -70	10111010 or 68	01000100
	b.odd_bits();
	cout << b << endl;		// 69	01000101 or -69	10111011

	return 0;
}
