#include <iostream>

using namespace std;

class T
{
	protected:
	T(double t = 0.0) : temperature(t)
	{
	}
	double temperature;
	friend ostream& operator<<(ostream&, const T&);
};

ostream& operator<<(ostream& stream, const T& t)
{
	return stream << t.temperature;
}

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

	F* p_F = &t;
	cout << 100 << "[C] is " << *p_F << "[F]" << endl;

	K* p_K = &t;
	cout << 100 << "[C] is " << *p_K << "[K]" << endl;

	R* p_R = &t;
	cout << 100 << "[C] is " << *p_R << "[R]" << endl;

	return 0;
}
