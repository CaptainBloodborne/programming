#include <iostream>

int main() 
{
    using namespace std;
    int n;
    int k;

    cin >> n >> k;

    for (int current_day_of_week(1);current_day_of_week < n; ++current_day_of_week) {
        cout << "   ";
    }

    cout << " " << 1;

    for (int current_day(2); current_day < k + 1; ++current_day)
    {
        if (n == 7)
        {
            cout << endl;
            n = 0;
        }

        if (n == 0)
        {
            if (current_day < 10)
            {
                cout << " ";
            }

            cout << current_day;
        

        } else if (current_day < 10)
        {
            cout << "  " << current_day;
        } else
        {
            cout << " " << current_day;
        }
        
        ++n;
    }

    cout << endl;

}
