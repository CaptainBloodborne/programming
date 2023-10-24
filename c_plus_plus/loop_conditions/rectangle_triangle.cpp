#include <iostream>

int main() 
{
    using namespace std;
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a + b < c || a + c < b || b + c < a) 
    {
        std::cout << "UNDEFINED" << endl;

        return 0;
    }
    
    int hypotenuse(a);
    int cathet1(b);
    int cathet2(c);

    if (a < b && b > c)
    {
        hypotenuse = b;
        cathet1 = a;
        cathet2 = c;
    }

    if (b < c && c > a)
    {
        hypotenuse = c;
        cathet2 = b;
        cathet1 = a;
    }

    cout << "Гипотенуза: " << hypotenuse << " Cathet1: " << cathet1 << " Cathet2: " << cathet2 << endl;

    if (hypotenuse * hypotenuse == cathet1 * cathet1 + cathet2 * cathet2)
    {
        cout << "YES" << endl;
    } else
    {
        cout << "NO" << endl;
    }

    return 0;
    
}
