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
	TemperatureScale fromFtoC()
	{
		temperature = 5 * (temperature - 32) / 9;
		return *this;
	}
	TemperatureScale fromKtoC()
	{
		temperature -= 273.15;
		return *this;
	}
	TemperatureScale fromRtoC()
	{
		temperature = 5 * temperature / 4;
		return *this;
	}
	TemperatureScale fromCtoF()
	{
		temperature = 9 * temperature / 5 + 32;
		return *this;
	}
	TemperatureScale fromCtoK()
	{
		temperature += 273.15;
		return *this;
	}
	TemperatureScale fromCtoR()
	{
		temperature = 4 * temperature / 5;
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

	t = 32;
	cout << t << "[F] is ";
	cout << t.fromFtoC() << "[C]" << endl;
	t = 100;
	cout << t << "[C] is ";
	cout << t.fromCtoF() << "[F]" << endl;

	t = 0;
	cout << t << "[K] is ";
	cout << t.fromKtoC() << "[C]" << endl;
	t = 100;
	cout << t << "[C] is ";
	cout << t.fromCtoK() << "[K]" << endl;

	t = 0;
	cout << t << "[R] is ";
	cout << t.fromRtoC() << "[C]" << endl;
	t = 100;
	cout << t << "[C] is ";
	cout << t.fromCtoR() << "[R]" << endl;

	return 0;
}
