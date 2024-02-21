// Класс-шаблон
// Адаптер контейнера - стек

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

// Эмуляция рекурсивного вызова функции
long int pseudoRecursiveFactorial(stack<short int> my_stack, short int n)
{
	if (!n)
		return 1;
	else
	{
		// Вталкивание чисел в стек
		while (n)
		{
			my_stack.push(n);
			--n;
		}
	}
	// Выталкивание чисел из стека
	long int p(1);
	while (!my_stack.empty())
	{
		p *= my_stack.top();
		my_stack.pop();
	}
	return p;
}
int main()
{
	stack<short int> my_stack;
	short int n(0);

	do
	{
		cout << "n? ";
		cin >> n;
		if (cin.fail()) cin.clear();
		while (cin.get() != '\n');
	}
	while (!(n >= 0 && n <= 12));
	cout << "n! = " << pseudoRecursiveFactorial(my_stack, n) << endl;

	return 0;
}
