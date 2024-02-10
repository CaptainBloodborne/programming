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
	TemperatureScale fromFtoC(const TemperatureScale& object)
	{
		if (this != &object) temperature = 5 * (object.temperature - 32) / 9;
		return *this;
	}
	TemperatureScale fromKtoC(const TemperatureScale& object)
	{
		if (this != &object) temperature = object.temperature - 273.15;
		return *this;
	}
	TemperatureScale fromRtoC(const TemperatureScale& object)
	{
		if (this != &object) temperature = 5 * object.temperature / 4;
		return *this;
	}
	TemperatureScale fromCtoF(const TemperatureScale& object)
	{
		if (this != &object) temperature = 9 * object.temperature / 5 + 32;
		return *this;
	}
	TemperatureScale fromCtoK(const TemperatureScale& object)
	{
		if (this != &object) temperature = object.temperature + 273.15;
		return *this;
	}
	TemperatureScale fromCtoR(const TemperatureScale& object)
	{
		if (this != &object) temperature = 4 * object.temperature / 5;
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
	TemperatureScale t_from, t_to;

	t_from = 32;
	t_to = t_to.fromFtoC(t_from);
	cout << t_from << "[F] is " << t_to << "[C]" << endl;
	t_from = 100;
	t_to = t_to.fromCtoF(t_from);
	cout << t_from << "[C] is " << t_to << "[F]" << endl;

	t_from = 0;
	t_to = t_to.fromKtoC(t_from);
	cout << t_from << "[K] is " << t_to << "[C]" << endl;
	t_from = 100;
	t_to = t_to.fromCtoK(t_from);
	cout << t_from << "[C] is " << t_to << "[K]" << endl;

	t_from = 0;
	t_to = t_to.fromRtoC(t_from);
	cout << t_from << "[R] is " << t_to << "[C]" << endl;
	t_from = 100;
	t_to = t_to.fromCtoR(t_from);
	cout << t_from << "[C] is " << t_to << "[R]" << endl;

	return 0;
}
