#include <iostream>
#include <limits>

int main() 
{
	using namespace std;

	int user_input1(0x0);
	int user_input2(0x0);
	int user_input3(0x0);
	char x;

    int fails_counter(0);

	cout << "Введите шестнадцатеричные исходные значения для x1, x2, x3 (целые числы в диапазоне [0x0, 0xff]): " << endl;

	cout << "x1? ";
	cin >> hex >> user_input1;
	for (;cin.fail() || (!(user_input1 >= 0x0 && user_input1 <= 0xff)); cin >> hex >> user_input1)
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

        cout <<"Введите шестнадцатеричное исходное значение (целые числы в диапазоне [0x0, 0xff]) для x1? ";
        cin.clear(); // В случае ошибки ввода, очищаем буфер ввода
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
	
	cout << "x2? ";
	cin >> hex >> user_input2;
	for (;cin.fail() || (!(user_input2 >= 0x0 && user_input2 <= 0xff)); cin >> hex >> user_input2)
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

        cout <<"Введите шестнадцатеричное исходное значение (целые числы в диапазоне [0x0, 0xff]) для x2? ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }

	cout << "x3? ";
	cin >> hex >> user_input3;
	for (;cin.fail() || (!(user_input3 >= 0x0 && user_input3 <= 0xff)); cin >> hex >> user_input3)
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

        cout <<"Введите шестнадцатеричное исходное значение (целые числы в диапазоне [0x0, 0xff]) для x3? ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }

	char x1(user_input1);
	char x2(user_input2);
	char x3(user_input3);

	cout << endl << "Исходные данные:" << endl;

	cout << "x1 = " << hex << (x1 & 0377);
	if (x1 & 0200) cout << " (-" << int(~x1 + 1) << ')';
	cout << endl;

	cout << "x2 = " << (x2 & 0377);
	if (x2 & 0200) cout << " (-" << int(~x2 + 1) << ')';
	cout << endl;

	cout << "x3 = " << (x3 & 0377);
	if (x3 & 0200) cout << " (-" << int(~x3 + 1) << ')';
	cout << endl;

	x = (x1 - x2) * x3;

	cout << endl << "Результат выражения x = (x1 - x2) * x3:" << endl;

	cout << "Десятичная система счисления: x = " << dec << int(x) << endl;
	cout << "Шестнадцатеричная система счисления: x = " << hex << int(x & 0377) << endl;

	return 0;
}
