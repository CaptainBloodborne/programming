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

    int n_len(0);

    for (int n_temp(n); n_temp != 0; n_temp /= 10)
    {
        ++n_len;
    }

    if (n_len < 2)
    {
        cout << "The length of input number is less than 2: the array won't be changed after cycle shifting! Exiting..." << endl;
        return -1;
    }

    int* number_array(new int[n_len]);

    for(int n_len_temp(n_len); n != 0;--n_len_temp)
    {
        int digit(n / IntPow(10, n_len_temp - 1));
        number_array[n_len - n_len_temp] = digit > 0 ? digit : digit * -1;
        n %= IntPow(10, n_len_temp - 1);
    }

    cout << "array before shifting:" << endl;
    print(number_array, n_len);

    RCycleShift(number_array, n_len);

    cout << "array after shifting:" << endl;
    print(number_array, n_len);

    delete[](number_array);

    return 0;
}
