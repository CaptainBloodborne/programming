#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    
    int n(0);

    for (int i(0); i <= 3; ++i)
    {
        if (i == 3)
        {
            cout << " Attemps limits exceeded! Exiting..." << endl;
            return 0;
        }

        cout << "Input 3-digit non-negative number? ";
        cin >> n;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input error: Wrong format! ";
            continue;
        } else if (!(n >= 100 && n <= 999))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input error: Range limits excedeed! ";
            continue;
        } else break;

    }

    if (n % 10 == 0)
    {
        cout << "Least significant digit equals 0! Impossible to swap extreme digits!" << endl;
         return 0;
    }

    int n_reversed(0);

    for (int i = 3; i > 0; --i)
    {
        n_reversed += static_cast<int>(pow(10, i - 1) * (n % 10));

        n /= 10;
    }

    cout << n_reversed << endl;

    return 0;
}
