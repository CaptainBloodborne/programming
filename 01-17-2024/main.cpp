#include <iostream>
using namespace std;

class Integer
{
    int number;

public:
    Integer(int n = 0):  number(n)
    {
        cout << "Initializing " << this << endl;
    }

    Integer(const Integer& object)
    {
        cout << "Initializing copy " << this<< endl;

        number = object.number;
    }

    Integer& operator=(const Integer& object)
    {

        cout << this << endl;
        if (this != &object) number = object.number;

        return *this;
    }

    friend istream& operator>>(istream&, Integer&);
    friend ostream& operator<<(ostream&, const Integer&);


};

istream& operator>>(istream& stream, Integer& n)
{
    cout << "Input integer: ";
    stream >> n.number;

    if (stream.fail()) stream.clear();
    while (stream.get() != '\n');

    return stream;
}

ostream& operator<<(ostream& stream, const Integer& n)
{

    stream << n.number << endl;

    return stream;
}

class Char
{
    char symbol;

public:
    Char(char s = 0): symbol(s)
    {
        cout << "Initializing " << this << endl;
    }

    Char(const Char& object)
    {
        cout << "Initializing copy " << this << endl;

        symbol = object.symbol;

    }

    Char& operator=(const Char& object)
    {
        if (this != &object) symbol = object.symbol;

        return *this;
    }

    friend istream& operator>>(istream&, Char&);
    friend ostream& operator<<(ostream&, const Char&);
};

istream& operator>>(istream& stream, Char &s)
{

    int new_counter(0);
    for (int i(33); i < 127; ++i)
    {

        cout << i << " - " << "\"" << char(i) << "\"";
        if (i <= 99)
        {
            cout << "  |";
        } else
        {
            cout << " |";
        }

        ++new_counter;
        if (new_counter == 10)
        {
            new_counter = 0;
            cout << endl;
            continue;
        }

        cout << '\t';
    }
    cout << '\n' << endl;

    int char_code(0);
    do
    {
        cout << "Input code for required symbol: ";

        stream >> char_code;

        if (stream.fail()) cin.clear();
        while (stream.get() != '\n');
    } while (!(char_code > 32 && char_code < 127));

    s.symbol = static_cast<char>(char_code);

    return stream;
}

ostream& operator<<(ostream& stream, const Char& s)
{
    stream << s.symbol << endl;

    return  stream;
}


int main()
{
    Integer a(0);
    cin >> a;
    cout << "a: " << a << endl;

    Integer b(a);
    cout << "b: " << b << endl;

    Integer x;
    x = a;
    cout << "x: " << x << endl;

    Char s1(0);
    cin >> s1;
    cout << "s1: " << s1 << endl;

    Char s2(s1);
    cout << "s2: " << s2 << endl;

    Char s3;
    s3 = s1;
    cout << "s3: " << s3 << endl;

    return 0;
}
