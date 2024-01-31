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

	Char& operator=(const Char& object)
	{
		if (this != &object) number = object.number;
		return *this;
	}

    void BitInversion(int bits_to_converse);

	friend istream& operator>>(istream&, Char&);
	friend ostream& operator<<(ostream&, const Char&);
};

void Char::BitInversion(int bits_to_converse){
    char temp_number(this->number);

    char mask(0125);

    if (bits_to_converse) mask = 0252;

    temp_number = temp_number ^ mask;

    cout << static_cast<int>(temp_number) << endl;

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
	Char a;

    cin >> hex >> a;

    cout << hex << a << endl;
	
	return 0;
}
