#include <clocale>
#include <iostream>
#include <limits>
#include <ostream>

uint UintPow(uint b, uint p)
{
    if (p == 0) return 1;

    if (p == 1) return b;

    uint n(b);
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
    using namespace std;
    
    uint n(0);

    for (int i(0); i < 3; ++i)
    {
        cout << "Input n-length number in range [11," << numeric_limits<uint>::max() << "]? ";
        cin >> n;

        if (cin.fail())
        {
            cout << n << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input error: Wrong format! ";
        } else if (!(n >= 11))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input error: Range limits excedeed! ";
        } else break;
    }

    if (n % 10 == 0)
    {
        cout << "Least significant digit equals 0! Impossible to swap extreme digits!" << endl;
         return 1;
    }

    int n_len(0);

    for (uint n_temp(n); n_temp > 0;n_temp = n_temp / 10)
    {
        ++n_len;
    }

    uint n_reversed(0);
    int n_len_counter(n_len);

    n_reversed += UintPow(10, n_len_counter - 1) * (n % 10);

    cout << n_reversed << endl;

    n /= 10;
    --n_len_counter;

    uint delim(UintPow(10, n_len_counter - 1));

    n_reversed += n / UintPow(10, n_len_counter - 1) * 1;

    n %= delim;
    --n_len_counter;

    while (n_len_counter > 0)
    {
        n_reversed += n / UintPow(10, n_len_counter - 1) * UintPow(10, n_len_counter);
        n %= UintPow(10, n_len_counter - 1);
        --n_len_counter;
    }

    int n_len_new(0);

    for (uint n_temp(n_reversed); n_temp > 0;n_temp = n_temp / 10)
    {
        ++n_len_new;
    }

    if (n_len_new < n_len)
    {
        cout << "Error! The length of new number is less than original! " << n_len << " " << n_len_new << endl;
        cout << n_reversed << endl;
        return 1;
    }

    cout << n_reversed << endl;

    return 0;
}
