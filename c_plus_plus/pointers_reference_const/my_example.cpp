#include <iostream>

using namespace std;

int main()
{
    int a(110);

    int *p = &a;

    const int &r = a;

    cout << r  << endl;
    cout << p[0]++ << endl;
    cout << r << endl;

    cout << p << endl;

    char *cp = reinterpret_cast<char *>(&a);

    cout << cp[0] << endl;
    cout << cp << endl;

    return 0;
}
