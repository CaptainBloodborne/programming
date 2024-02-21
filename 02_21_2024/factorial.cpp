// C++ Functions

#include <iostream>

long int recursiveFactorial(short int n)
{
	if (!n)
		return 1;
	else
		return n * recursiveFactorial(n - 1);
}

long int iterativeFactorial(short int n)
{
	if (!n)
		return 1;
	else
	{
		long int p = 1;
		for (int k = 1; k < n; p *= ++k);
		return p;
	}
}

int main()
{
	using namespace std;

	short int n(0);
	long int(*functionPointer)(short int) = recursiveFactorial;
	do
	{
		cout << "n? ";
		cin >> n;
		if (cin.fail()) cin.clear();
		while (cin.get() != '\n');
	}
	while (!(n >= 0 && n <= 12));
	cout << "n! = " << functionPointer(n) << endl;
	functionPointer = iterativeFactorial;
	cout << "n! = " << functionPointer(n) << endl;

	return 0;
}
