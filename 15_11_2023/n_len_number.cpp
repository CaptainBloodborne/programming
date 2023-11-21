#include <iostream>
#include <limits>

using namespace std;

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
    int n(0);

    for (int i(0); i <= 3; ++i)
    {

        if (i == 3)
        {
            cout << "Attempts limits exceeded! Exiting..." << endl;
            return -1;
        }

        cout << "Input n-length number in range [11," << numeric_limits<int>::max() << "]? ";
        cin >> n;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input error: Wrong format! ";
        } else if (!(n >= 11)) // Так как правая граница является максимальным числом для целого числа, то выход за его границы приведет к ошибке формата
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input error: Range limits excedeed! ";
        } else break;
    }

    if (n % 10 == 0) // Если младший разряд оказался равен нуло, завершаем программу
    {
        cout << "Least significant digit equals 0! Impossible to swap extreme digits! Exiting..." << endl;
         return -1;
    }

    int n_len(0);

    for (int n_temp(n); n_temp > 0;n_temp = n_temp / 10) // Определяем количество цифр в числе
    {
        ++n_len;
    }

    int n_reversed(0);

    int last_digit(n % 10);
    int first_digit(n / IntPow(10, n_len - 1));

    // Проверка результата на принадлежность заданному диапазону значений
    int len_numeric_limits_int_max(0);
    for (int n_temp(numeric_limits<int>::max()); n_temp > 0;n_temp = n_temp / 10)
    {
        ++len_numeric_limits_int_max;
    }

    int len_numeric_limits_int_max_last_digit(numeric_limits<int>::max() / IntPow(10, n_len - 1));

    if (n_len == len_numeric_limits_int_max && last_digit > len_numeric_limits_int_max_last_digit)
    {
        cout << "Error: Result of swapping is out possible range! Exiting..." << endl;
        return -1;
    }

    n_reversed += IntPow(10, n_len - 1) * last_digit + first_digit;

    n_len -= 2;

    n = n / 10 % (IntPow(10, n_len));

    while (n_len >= 0)
    {
        n_reversed += n / IntPow(10, n_len - 1) * IntPow(10, n_len);
        n %= IntPow(10, n_len - 1);
        --n_len;
    }

    cout << n_reversed << endl;

    return 0;
}
