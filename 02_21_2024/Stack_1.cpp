// Класс-шаблон
// C++ Абстрактный тип данных - стек

#include <iostream>

template <class T>
class Stack
{
	// Компонентные данные - все собственные (private)
	T* pointer;
	int top;
	int stackEmpty;
	int stackFull;

	public:
	// Компонентные функции - все общедоступные (public)
	// Конструктор объектов класса – конструктор по умолчанию
	Stack(int stackSize = 100):
		stackEmpty(-1),
		stackFull(stackSize - 1)
	{
		pointer = new T[stackSize];
		top = stackEmpty;
	}
	// Деструктор объектов класса
	~Stack()
	{
		delete[] pointer;
	}
	// Вталкивание данных в стек
	void push(T data)
	{
		pointer[++top] = data;
	}
	// Выталкивание данных из стека
	T pop()
	{
		return pointer[top--];
	}
	// Проверить состояние стека - "пустой"
	bool empty()
	{
		return (top == stackEmpty);
	}
	// Проверить состояние стека - "заполнен"
	bool full()
	{
		return (top == stackFull);
	}
};

int main()
{
	using namespace std;

	Stack<char> stack(10);
	char line[] = "Hello, Hello!";
	int i = 0;

	cout << line << endl;
	if (stack.empty())
		cout << "Stack is empty" << endl;
	else
		cout << "Stack isn't empty" << endl;

	// Вталкивание символов С-строки в стек
	while (line[i])
		if (!stack.full())
			stack.push(line[i++]);
		else
			++i;
	if (stack.empty())
		cout << "Stack is empty" << endl;
	else
		cout << "Stack isn't empty" << endl;

	// Выталкивание символов из стека
	while (!stack.empty()) cout << stack.pop();
	cout << endl;
	if (stack.empty())
		cout << "Stack is empty" << endl;
	else
		cout << "Stack isn't empty" << endl;

	return 0;
}
