#include <iostream>

using namespace std;

class C
{
	public:
	C(double t = 0.0) : temperature(t)
	{
	}
	friend ostream& operator<<(ostream&, const C&);
	protected:
	double temperature;
};

ostream& operator<<(ostream& stream, const C& t)
{
	return stream << t.temperature;
}

class F : public C
{
	public:
	F(double t = 0.0) : C(5 * (t - 32) / 9)
	{
	}
};

class K : public C
{
	public:
	K(double t = 0.0) : C(t - 273.15)
	{
	}
};

class R : public C
{
	public:
	R(double t = 0.0) : C(5 * t / 4)
	{
	}
};

int main()
{
	F t_F(32);
	K t_K;
	R t_R(80);

	cout << 32 << "[F] is " << t_F << "[C]" << endl;
	cout << 0 << "[K] is " << t_K << "[C]" << endl;
	cout << 80 << "[R] is " << t_R << "[C]" << endl;

	return 0;
}
