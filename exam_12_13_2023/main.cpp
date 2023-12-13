#include <iostream>
#include <limits>

using namespace std;

void print(int* pointer, int n)
{
    cout << '{';
    for (int i(0); i < n; ++i)
    {
        cout << pointer[i];
        if (i != n - 1) cout << ',';
    }

    cout << '}' << endl;
}

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

int UserInput(int& n)
{
    for (int i(0); i <= 3; ++i)
    {

        cout << "Input n? ";
        cin >> n;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input error: Wrong format! ";
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return 0;
        }
    }

    {
            cout << "Attempts limits exceeded! Exiting..." << endl;
            return -1;
        }

}

void RCycleShift(int* pointer, int n_len)
{
    int last_digit(pointer[n_len - 1]);

    for (int i(n_len - 2); i >= 0; --i)
    {
        pointer[i + 1] = pointer[i];

    }

    pointer[0] = last_digit;
}


int main(){

    int n(0);

    int input_status(UserInput(n));

    if (input_status == -1) return -1;

    if (n < 0) n *= -1;

    int n_len(0);

    for (int n_temp(n); n_temp != 0;n_temp = n_temp / 10) // Определяем количество цифр в числе
    {
        ++n_len;
    }

    int* arr_p(new int[n_len]);

    for(int n_temp(n), n_len_temp(n_len); n_temp != 0; n_temp %= IntPow(10, n_len_temp - 1), --n_len_temp)
    {
        arr_p[n_len - n_len_temp] = n_temp / IntPow(10, n_len_temp - 1);
    }

    cout << "array before shifting:" << endl;
    print(arr_p, n_len);

    RCycleShift(arr_p, n_len);

    cout << "array after shifting:" << endl;
    print(arr_p, n_len);

    return 0;
}
