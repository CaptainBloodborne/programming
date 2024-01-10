#include <iostream>
#include <string>

using namespace std;

int f(int x) {

    return x;

}

 

// int f(int y) {  // ошибка компиляции: функция с таким именем и типом параметра уже была

//     return 2 * y;

// }

 

// double f(int x) {  // ошибка компиляции: перегружать по возвращаемому значению нельзя

//     return 3 * x;

// }

void Print(int value)
{
    cout << value << endl; 
}

void Print(const string& name, int value)
{
    cout << name << ": " << value << endl; 
}

void Print(const string& str)
{
    cout << str << endl;
}

int main()
{
    Print(42);  // версия 1

    Print("x", 42);  // версия 2

    Print("good bye");  // версия 3

    return 0;
}