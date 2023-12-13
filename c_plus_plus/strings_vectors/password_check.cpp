#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string s;
    int char_class(-1);
    int char_class_counter(0);

    getline(cin, s);

    if (!(s.size() >= 8 && s.size() <= 14))
        {
            cout << "NO" << endl;
            return 0;
        }

    for (char c: s)
    {

        if(!(c >= 33 && c <= 126))
        {
            cout << "NO" << endl;
            return 0;
        }

        if (c >= 48 && c <= 57)
        {
            if (char_class == 1) continue;

            char_class = 1;
            ++char_class_counter;
        } else if ((c >= 65 && c <= 90))
        {
            if (char_class == 2) continue;

            char_class = 2;
            ++char_class_counter;
        } else if (c >= 97 && c <= 122)
        {
            if (char_class == 3) continue;

            char_class = 3;
            ++char_class_counter;
        } else
        {
            if (char_class == 0) continue;

            char_class = 0;
            ++char_class_counter;
        }

    }

    char_class_counter >= 3 ? cout << "YES" : cout << "NO";
    cout << endl;
    
    return 0;
}
