#include <iostream>

using namespace std;

class F
{
	protected:
	F(double t = 0.0) : temperature(t)
	{
	}
	double temperature;
	friend ostream& operator<<(ostream&, const F&);

};

ostream& operator<<(ostream& stream, const F& t)
{
	return stream << t.temperature;
}

class K
{
	protected:
	K(double t = 0.0) : temperature(t)
	{
	}
	double temperature;
	friend ostream& operator<<(ostream&, const K&);
};

ostream& operator<<(ostream& stream, const K& t)
{
	return stream << t.temperature;
}

class R
{
	protected:
	R(double t = 0.0) : temperature(t)
	{
	}
	double temperature;
	friend ostream& operator<<(ostream&, const R&);
};

ostream& operator<<(ostream& stream, const R& t)
{
	return stream << t.temperature;
}

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
	cout << 100 << "[C] is " << *p_F << "[F]" << endl;

	K* p_K = &t;
	cout << 100 << "[C] is " << *p_K << "[K]" << endl;

	R* p_R = &t;
	cout << 100 << "[C] is " << *p_R << "[R]" << endl;

	return 0;
}
