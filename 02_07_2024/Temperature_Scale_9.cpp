#include <iostream>

using namespace std;

class T
{
	public:
	void print()
	{
		cout << temperature;
	}
	protected:
	T(double t = 0.0) : temperature(t)
	{
	}
	double temperature;
};

class F : public T
{
	protected:
	F(double t) : T(t)
	{
	}
};

class K : public T
{
	protected:
	K(double t) : T(t)
	{
	}
};

class R : public T
{
	protected:
	R(double t) : T(t)
	{
	}
};

class C : public F, public K, public R
{
	public:
	C(double t) : F(9 * t / 5 + 32), K(t + 273.15), R(4 * t / 5)
	{
	}
};


int main()
{
	C t(100);

	F* f = &t;
	cout << 100 << "[C] is ";
	f->print();
	cout << "[F]" << endl;

	K* k = &t;
	cout << 100 << "[C] is ";
	k->print();
	cout << "[K]" << endl;

	R* r = &t;
	cout << 100 << "[C] is ";
	r->print();
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
