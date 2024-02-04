#include <iostream>

using namespace std;

struct TemperatureScale
{
	double C;
	double F;
	double K;
	double R;
};

double fromFtoC(TemperatureScale* t)
{
	return 5 * (t->F - 32) / 9;
}

double fromKtoC(TemperatureScale* t)
{
	return t->K - 273.15;
}

double fromRtoC(TemperatureScale* t)
{
	return 5 * t->R / 4;
}

double fromCtoF(TemperatureScale* t)
{
	return 9 * t->C / 5 + 32;
}

double fromCtoK(TemperatureScale* t)
{
	return t->C + 273.15;
}

double fromCtoR(TemperatureScale* t)
{
	return 4 * t->C / 5;
}

int main()
{
	TemperatureScale t;

	t.F = 32;
	cout << 32 << "[F] is " << fromFtoC(&t) << "[C]" << endl;
	t.C = 100;
	cout << 100 << "[C] is " << fromCtoF(&t) << "[F]" << endl;
	t.K = 0;
	cout << 0 << "[K] is " << fromKtoC(&t) << "[C]" << endl;
	t.C = 100;
	cout << 100 << "[C] is " << fromCtoK(&t) << "[K]" << endl;
	t.R = 0;
	cout << 0 << "[R] is " << fromRtoC(&t) << "[C]" << endl;
	t.C = 100;
	cout << 100 << "[C] is " << fromCtoR(&t) << "[R]" << endl;

	return 0;
}
