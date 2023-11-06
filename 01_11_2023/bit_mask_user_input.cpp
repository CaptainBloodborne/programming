#include <bitset>
#include <iostream>
#include <limits>

int main() 
{
    using namespace std;
    int n(0);
    int inversion_mask(0);
    int x(0);
    // char c;

    cout << "Введите целое число в диапазоне [-128, 127]? ";
    cin >> n;

    for (int fails_counter(0); cin.fail() || (!(n >= -128 && n <= 127)); cin >> n)
    {
        // cout << "badbit " << cin.rdstate() << endl;

        cout << "Ошибка ввода: ";
        if (cin.rdstate() != 0x00)
        {
            cout << "Неверный формат! ";
        } else 
        {
            cout << "Выход за границы диапазона! ";
        }

        cout <<"Введите целое число в диапазоне [-128, 127]? ";
        cin.clear(); // В случае ошибки ввода, очищаем буфер ввода
        // cout << "badbit " << cin.bad() << endl;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // while (cin.get() != '\n')
        // {

        //     // Считываем буфер ввода, пока не дойдем до символа новой строки (включительно)
        // }

        if (fails_counter >= 5)
        {
            cout << "Превышено число попыток! Завершение программы..." << endl;
            return 0;
        }
        ++fails_counter;

    }
    // cout << "goodbit " << cin.rdstate() << endl;
    
    cout  << "Source number:\n" << n << endl;
    cout << bitset<8>(n) << endl;

    n &= 0377;

    cout << "n = " << n;
    cout << "n = " << bitset<8>(n) << endl;

    cout << "Введите восьмеричную маску для инвертирования битов исходного числа:" << endl 
    << "0125 - для инвертирования четных битов" << endl
    << "0252 - для инвертирования нечетных битов ";
    
    cin >> oct >> inversion_mask;

    for (int fails_counter(0); !(inversion_mask != 0125 || inversion_mask != 0252) || cin.fail(); cin >> inversion_mask)
    {

        cout << "Ошибка ввода: ";
        if (cin.rdstate() != 0x00)
        {
            cout << "Неверный формат! ";
        } else 
        {
            cout << "Неизвестное значение маски! ";
        }

        cout << "Введите восьмеричную маску для инвертирования битов исходного числа:" << endl 
        << "0125 - для инвертирования четных битов" << endl
        << "0252 - для инвертирования нечетных битов ";

        cin.clear(); // В случае ошибки ввода, очищаем буфер ввода
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        ++fails_counter;

        if (fails_counter >= 5)
        {
            cout << "Превышено число попыток! Завершение программы..." << endl;
            return 0;
        }
    }

    n = n ^ inversion_mask;

    if ( (inversion_mask == 0125) && (n & 0200))
    {
        n = n ^ 037777777400;
    }

    cout << "n = " << dec << n << endl;
    cout << "n = " << bitset<8>(n) << endl;

    return 0;
}
