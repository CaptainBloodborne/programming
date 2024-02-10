#include <iostream>

using namespace std;

class TemperatureScale
{
	double temperature;

	public:
	TemperatureScale(double t = 0.0) : temperature(t)
	{
	}
	TemperatureScale(const TemperatureScale& object) : temperature(object.temperature)
	{
	}
	TemperatureScale& operator=(const TemperatureScale& object)
	{
		if (this != &object) temperature = object.temperature;
		return *this;
	}
	TemperatureScale fromFtoC(const double& t)
	{
		temperature = 5 * (t - 32) / 9;
		return *this;
	}
	TemperatureScale fromKtoC(const double& t)
	{
		temperature = t - 273.15;
		return *this;
	}
	TemperatureScale fromRtoC(const double& t)
	{
		temperature = 5 * t / 4;
		return *this;
	}
	TemperatureScale fromCtoF(const double& t)
	{
		temperature = 9 * t / 5 + 32;
		return *this;
	}
	TemperatureScale fromCtoK(const double& t)
	{
		temperature = t + 273.15;
		return *this;
	}
	TemperatureScale fromCtoR(const double& t)
	{
		temperature = 4 * t / 5;
		return *this;
	}
	friend ostream& operator<<(ostream&, const TemperatureScale&);
};

ostream& operator<<(ostream& stream, const TemperatureScale& t)
{
	return stream << t.temperature;
}

int main()
{
	TemperatureScale t;

	cout << 32 << "[F] is " << t.fromFtoC(32) << "[C]" << endl;
	cout << 100 << "[C] is " << t.fromCtoF(100) << "[F]" << endl;

	cout << 0 << "[K] is " << t.fromKtoC(0) << "[C]" << endl;
	cout << 100 << "[C] is " << t.fromCtoK(100) << "[K]" << endl;

	cout << 0 << "[R] is " << t.fromRtoC(0) << "[C]" << endl;
	cout << 100 << "[C] is " << t.fromCtoR(100) << "[R]" << endl;

	return 0;
}
