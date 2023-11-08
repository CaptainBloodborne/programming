#include <bitset>
#include <iostream>
#include <limits>

int main() 
{
    using namespace std;
    
    int n(0);
    int inversion_mask(0);

    cout << "Введите целое число в диапазоне [-128, 127]? ";
    cin >> n;

    for (int fails_counter(0); cin.fail() || (!(n >= -128 && n <= 127)); cin >> n)
    {
        cout << "Ошибка ввода: ";
        if (cin.rdstate() != 0x00)
        {
            cout << "Неверный формат! ";
        } else 
        {
            cout << "Выход за границы диапазона! ";
        }

        ++fails_counter;
        if (fails_counter >= 5)
        {
            cout << "Превышено число попыток ввода! Завершение программы..." << endl;
            return 0;
        }

        cout <<"Введите целое число в диапазоне [-128, 127]? ";
        cin.clear(); // В случае ошибки ввода, очищаем буфер ввода

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    cout  << "Исходное число: " << n << endl;
    cout << "Двоичный дамп: " << bitset<8>(n) << endl;

    cout << "Переход к  8-разрядному  двоичному полю..." << endl;
    n &= 0377;

    cout << "n = " << n << endl;
    cout << "Двоичный дамп: n = " << bitset<8>(n) << endl;

    cout << "Введите восьмеричную маску для инвертирования битов исходного числа:" << endl 
    << "0125 - для инвертирования четных битов" << endl
    << "0252 - для инвертирования нечетных битов\n"
    << "Маска? ";
    
    cin >> oct >> inversion_mask;

    for (int fails_counter(0); !(inversion_mask == 0125 || inversion_mask == 0252) || cin.fail(); cin >> oct >> inversion_mask)
    {

        cout << "Ошибка ввода: ";
        if (cin.rdstate() != 0x00)
        {
            cout << "Неверный формат! ";
        } else 
        {
            cout << "Неизвестное значение маски! ";
        }

        ++fails_counter;
        if (fails_counter >= 5)
        {
            cout << "Превышено число попыток ввода! Завершение программы..." << endl;
            return 0;
        }

        cout << "Введите восьмеричную маску для инвертирования битов исходного числа:" << endl 
        << "0125 - для инвертирования четных битов" << endl
        << "0252 - для инвертирования нечетных битов\n"
        << "Маска? ";

        cin.clear(); // В случае ошибки ввода, очищаем буфер ввода
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    n = n ^ inversion_mask;

    if ((inversion_mask == 0125) && (n & 0200))
    {
        n = n ^ 037777777400;
    }

    cout << "n = " << dec << n << endl;
    cout << "Двоичный дамп: n = " << bitset<8>(n) << endl;

    return 0;
}
