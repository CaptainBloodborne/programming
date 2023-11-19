#include <clocale>
#include <iostream>
#include <cmath>
#include <climits>

int IntPow(int b, int p)
{
    if (p == 0) return 1;

    if (p == 1) return b;

    int n(b);
    do 
    {
        n *= b;
        --p;
    }
    
    while (p > 1);

    return n;
}

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
            cout << n << endl;
            cin.clear();
            cerr << "Ошибка ввода: неверный формат! ";
            continue;
        } else if (!(n >= 11 && n <= INT_MAX))
        {
            cerr << "Ошибка ввода: выход за границу диапазона! ";
        } else break;
    }

    if (n % 10 == 0)
    {
        cerr << "Младший разряд равен 0! Невозможно выполнить перестановку крайних цифр!" << endl;
         return 0;
    }

    int n_order(0);

    for (int n_temp(n); n_temp > 0;n_temp = n_temp / 10)
    {
        cout << n_temp << endl;
        ++n_order;
    }
    
    int n_reversed(0);

    n_reversed += IntPow(10, n_order -1) * (n % 10);
    n /= 10;
    --n_order;

    int delim(IntPow(10, n_order - 1));

    n_reversed += n / IntPow(10, n_order - 1) * 1;
    n %= delim;
    --n_order;

    // cout << n << "\t" << n_order << "\t" << int(log10(n)) <<  endl;

    while (n_order >= 0)
    {
        n_reversed += n / IntPow(10, n_order - 1) * IntPow(10, n_order);
        n %= IntPow(10, n_order - 1);
        --n_order;
    }

    if (n_reversed < 0 || n_reversed > INT_MAX)
    {
        cout << "Ошибка ввода: выход за границу допустимых значений! " << INT_MAX << endl;

        return 0;
    }

    cout << n_reversed << endl;

    return 0;
}
