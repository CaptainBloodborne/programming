#include <iostream>

using namespace std;

class F
{
	public:
	void print()
	{
		cout << temperature;
	}
	protected:
	F(double t = 0.0) : temperature(t)
	{
	}
	double temperature;
};

class K
{
	public:
	void print()
	{
		cout << temperature;
	}
	protected:
	K(double t = 0.0) : temperature(t)
	{
	}
	double temperature;
};

class R
{
	public:
	void print()
	{
		cout << temperature;
	}
	protected:
	R(double t = 0.0) : temperature(t)
	{
	}
	double temperature;
};

class C : public F, public K, public R
{
	public:
	C(double t = 0.0) : F(9 * t / 5 + 32), K(t + 273.15), R(4 * t / 5)
	{
	}
};

int main()
{
	C t(100);

	F* p_F = &t;
	cout << 100 << "[C] is ";
	p_F->print();
	cout << "[F]" << endl;

	K* p_K = &t;
	cout << 100 << "[C] is ";
	p_K->print();
	cout << "[K]" << endl;

	R* p_R = &t;
	cout << 100 << "[C] is ";
	p_R->print();
	cout << "[R]" << endl;

	cout << '\n' << 100 << "[C] is ";
	t.F::print();
	cout << "[F]" << endl;

	cout << 100 << "[C] is ";
	t.K::print();
	cout << "[K]" << endl;

	cout << 100 << "[C] is ";
	t.R::print();
	cout << "[R]" << endl;

	return 0;
}
