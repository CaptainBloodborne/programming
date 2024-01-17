#include <iostream>

using namespace std;

class Integer
{
	int number;

	public:
	Integer(int n = 0) : number(n) {}
	void input();
	void print();
};

void Integer::input()
{
	cout << "? ";
	cin >> number;
	if (cin.fail()) cin.clear();
	while (cin.get() != '\n');
}

void Integer::print()
{
	cout << number << endl;
}

int main()
{
	Integer a(1), b(2), c;
	a.print();			// 1
	b.print();			// 2
	c.print();			// 0
	c.input();
	c.print();

	return 0;
}
