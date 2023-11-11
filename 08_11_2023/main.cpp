#include <clocale>
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "RU");
    using namespace std;
    
    int n(0);

    for (int i(0); i < 3; ++i)
    {
        cout << "Введите трёхзначное число? ";
        cin >> n;

        if (cin.fail()) 
        {
            cerr << "Ошибка ввода: неверный формат! ";
            continue;
        } else if (!(n >= 100 && n <= 999))
        {
            cerr << "Ошибка ввода: выход за границу диапазона! ";
        } else break;
    }

    if (n % 10 == 0)
    {
        cerr << "Младший разряд равен 0! Невозможно выполнить перестановку крайних цифр!" << endl;
         return 0;
    }

    int n_reversed(0);

    for (int i = 3; i > 0; --i)
    {
        n_reversed += (pow(10, i - 1) * (n % 10));

        n /= 10;
    }

    cout << n_reversed << endl;

    return 0;
}
