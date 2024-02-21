// Класс-шаблон
// Адаптер контейнера - стек

#include <iostream>
#include <algorithm>
#include <stack>

int main()
{
	using namespace std;

	stack<char> my_stack;
	char line[] = "Hello, Hello!";
	int i = 0;

	cout << line << endl;
	cout << my_stack.size() << endl;
	if (my_stack.empty())
		cout << "Stack is empty" << endl;
	else
		cout << "Stack isn't empty" << endl;

	// Вталкивание символов С-строки в стек
	while (line[i]) my_stack.push(line[i++]);
	cout << my_stack.size() << endl;
	if (my_stack.empty())
		cout << "Stack is empty" << endl;
	else
		cout << "Stack isn't empty" << endl;

	// Выталкивание символов из стека
	while (!my_stack.empty())
	{
		cout << my_stack.top();
		my_stack.pop();
	}
	cout << endl;
	cout << my_stack.size() << endl;
	if (my_stack.empty())
		cout << "Stack is empty" << endl;
	else
		cout << "Stack isn't empty" << endl;

	return 0;
}
