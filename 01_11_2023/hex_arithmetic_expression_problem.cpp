#include <iostream>
#include <limits>

int main() /*
Дополнительный код -128 получается равен 128, но уже на 9-разрядном двоичном поле? 
Почему тогда при операции побитового & 0377, x становится равным 128 без минуса? Происходит преобразование типа в int при выводе в консоль?
*/ 
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

        cout <<"Введите шестнадцатеричное исходное значение (целые числы в диапазоне [0x0, 0xff]) для x1? ";
        cin.clear(); // В случае ошибки ввода, очищаем буфер ввода
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if (fails_counter >= 5)
        {
            cout << "Превышено число попыток! Завершение программы..." << endl;
            return 0;
        }
        ++fails_counter;
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

        cout <<"Введите шестнадцатеричное исходное значение (целые числы в диапазоне [0x0, 0xff]) для x2? ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if (fails_counter >= 5)
        {
            cout << "Превышено число попыток! Завершение программы..." << endl;
            return 0;
        }
        ++fails_counter;

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

        cout <<"Введите шестнадцатеричное исходное значение (целые числы в диапазоне [0x0, 0xff]) для x3? ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if (fails_counter >= 5)
        {
            cout << "Превышено число попыток! Завершение программы..." << endl;
            return 0;
        }
        ++fails_counter;
    }

	// do 
	// {
	// 	int fail_counter(0);
	// 	cout << "Введите исходные значения для x1, x2, x3 (целые числы в диапазоне [-128, 127]): " << endl
	// 	<< "x3? ";
	// 	cin >> hex >> x1;
	// 	if (cin.fail())
	// 	{
	// 		cout << 
	// 	}

	// 	cout << "x2? ";
	// 	cin >> hex >> x2;
	// 	cout <<  "x3? ";
	// 	cin >> hex >> x3;
	// }
	// while (
	// 	!(x1 >= -128 && x1 <= 127) && 
	// 	!(x2 >= -128 && x2 <= 127) && 
	// 	!(x3 >= -128 && x3 <= 127)
	// );

	char x1(user_input1);
	char x2(user_input2);
	char x3(user_input3);

	cout << endl << "Source data:" << endl;

	cout << "x1 = " << hex << (x1 & 0377);
	if (x1 & 0200) cout << " (-" << int(~x1 + 1) << ')';
	cout << endl;

	cout << "x2 = " << (x2 & 0377);
	char x2_char = char(x2);
	if (x2 & 0200) cout << " (-" << int(~x2_char + 1) << ')';
	cout << endl;

	cout << "x3 = " << (x3 & 0377);
	if (x3 & 0200) cout << " (-" << int(~x3 + 1) << ')';
	cout << endl;

	cout << endl << "Result data:" << endl;

	x = (x1 - x2) * x3;

	cout << dec << int(x) << endl;			// -128
	cout << hex << int(x & 0377) << endl;	// 80

	return 0;
}
