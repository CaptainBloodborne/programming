#include <iostream>

using namespace std;

enum scaleStatus { F, K, R };

struct TemperatureScale
{
	double temperature;
	scaleStatus type;
	union
	{	
		double C;
		double F;
		double K;
		double R;
	};
};

void toC(TemperatureScale* scale)
{
	switch (scale->type)
	{
		case F :
		{ 
			scale->temperature = 5 * (scale->F - 32) / 9;
			break;
		}
		case K :
		{ 
			scale->temperature = scale->K - 273.15;
			break;
		}
		case R :
		{ 
			scale->temperature = 5 * scale->R / 4;
			break;
		}
	}
}

void fromC(TemperatureScale* scale)
{
	switch (scale->type)
	{
		case F :
		{ 
			scale->temperature = 9 * scale->C / 5 + 32;
			break;
		}
		case K :
		{ 
			scale->temperature = scale->C + 273.15;
			break;
		}
		case R :
		{ 
			scale->temperature = 4 * scale->C / 5;
			break;
		}
	}
}

int main()
{
	TemperatureScale t;

	t.type = F;
	t.F = 32;
	toC(&t);
	cout << t.F << "[F] is " << t.temperature << "[C]" << endl;
	t.C = 100;
	fromC(&t);
	cout << t.C << "[C] is " << t.temperature << "[F]" << endl;
	t.type = K;
	t.K = 0;
	toC(&t);
	cout << t.K << "[K] is " << t.temperature << "[C]" << endl;
	t.C = 100;
	fromC(&t);
	cout << t.C << "[C] is " << t.temperature << "[K]" << endl;
	t.type = R;
	t.R = 0;
	toC(&t);
	cout << t.R << "[R] is " << t.temperature << "[C]" << endl;
	t.C = 100;
	fromC(&t);
	cout << t.C << "[C] is " << t.temperature << "[R]" << endl;

	return 0;
}
