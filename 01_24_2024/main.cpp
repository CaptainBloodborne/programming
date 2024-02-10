#include <iostream>

using namespace std;

class Char
{
    char number;

    public:
    Char(char n = 0) : number(n) {}
    Char(const Char& object) {
        number = object.number;
    }

    Char& operator=(const Char& object)
    {
        if (this != &object) number = object.number;

        return *this;
    }

    friend istream& operator>>(istream&, Char&);
    friend ostream& operator<<(ostream&, const Char&);

    void BitInversion() const;

};

istream& operator>>(istream& stream, Char& n)
{
    int temp_number(0);

    do
    {
        cout << "Input 8-bit number [-128, 127]: ";
        stream >> temp_number;

        if (stream.fail()) cin.clear();
        while (stream.get() != '\n');
    } while (!(temp_number > -129 && temp_number < 128));

    n.number = static_cast<char>(temp_number);

    return stream;
}

ostream& operator<<(ostream& stream, const Char& n)
{
    stream << static_cast<int>(n.number);

    return stream;
}

void Char::BitInversion() const
{
    char temp_number(this->number);

    int n(0);
    char mask(0125);

    cout << "Bit inversion\n";
    cout << "0 - inverse even bits\n" << "1 - inverse odd bits\nEnter: ";

    do
    {
        cin >> n;
        if (cin.fail()) cin.clear();
        while(cin.get() != '\n');

    } while (!(n == 1 || n == 0));

    if (n) mask = 0252;

    temp_number = temp_number ^ mask;

    cout << static_cast<int>(temp_number) << endl;

}

int main()
{
    Char c;

    cin >> c;
    cout << "Entered 8-bit number: " << c << endl;

    c.BitInversion();

    return 0;
}
