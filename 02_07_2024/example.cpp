// C++ Множественное виртуальное наследование
#include <iostream>
using namespace std;
struct A_based
{
// Компонентные функции - все общедоступные (public)
// Конструктор объектов базового класса
A_based(int i = 0) : a_data(i)
{
cout << "Конструктор базового класса A_based" << endl;
}
// Деструктор объектов базового класса
~A_based()
{
cout << "Деструктор базового класса A_based" << endl;
}
// Визуализация компонента базового класса
void print()
{
cout << a_data << endl;
}
protected:
// Компонентные данные - все защищенные (protected)
int a_data;
};
struct B_derived : virtual A_based
{
// Компонентные функции - все общедоступные (public)
// Конструктор объектов ближайшего производного класса
B_derived(int i, long l) : A_based(i), b_data(l)
{
cout << "Конструктор производного класса B_derived" << endl;
}
// Деструктор объектов производного класса
~B_derived()
{
cout << "Деструктор производного класса B_derived" << endl;
}
// Визуализация компонентов классов
void print()
{
cout << a_data << ' ';
A_based::print();
cout << b_data << endl;
}
protected:
// Компонентные данные - все защищенные (protected)
long b_data;
// Компонентные функции – все защищенные (protected)
// Конструктор объектов промежуточного производного класса
B_derived()
{
cout << "Конструктор производного класса B_derived*" << endl;
}
};
struct C_derived : virtual A_based
{
// Компонентные функции - все общедоступные (public)
// Конструктор объектов ближайшего производного класса
C_derived(int i = 0, float f = 0.0) : A_based(i), c_data(f)
{
cout << "Конструктор производного класса C_derived" << endl;
}
// Деструктор объектов производного класса
~C_derived()
{
cout << "Деструктор производного класса C_derived" << endl;
}
// Визуализация компонентов классов
void print()
{
cout << a_data << ' ';
A_based::print();
cout << c_data << endl;
}
protected:
// Компонентные данные - все защищенные (protected)
float c_data;
// Компонентные функции – все защищенные (protected)
// Конструктор объектов промежуточного производного класса
C_derived(float f = 0.0) : c_data(f)
{
cout << "Конструктор производного класса C_derived*" << endl;
}
};
struct D_derived : B_derived, C_derived
{
// Компонентные функции - все общедоступные (public)
// Конструктор объектов производного класса
D_derived(int i = 0, long l = 0, float f = 0.0, double d = 0.0)
: A_based(i), C_derived(f), d_data(d)
{
cout << "Конструктор производного класса D_derived" << endl;
b_data = l;
}
// Деструктор объектов производного класса
~D_derived()
{
cout << "Деструктор производного класса D_derived" << endl;
}
// Визуализация компонентов классов
void print()
{
A_based::print();
cout << a_data << ' ';
B_derived::print();
cout << b_data << endl;
C_derived::print();
cout << c_data << endl;
cout << d_data << endl;
}
protected:
// Компонентные данные - все защищенные (protected)
double d_data;
};

int main()
{
    A_based a(1);
    a.print();

    B_derived b(2, 3);
    b.print();
    C_derived c(4, 5);
    c.print();
    D_derived d(6, 7, 8, 9);
    d.print();
    return 0;
}
