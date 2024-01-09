#include <cstdint>
#include <iostream>
#include <sys/types.h>

using namespace std;

int Sum(int a, int b)
{
    return a + b;
}

void DoSomething(double d, char c)
{
    cout << "Double: " << d << endl;
    cout << "Char: " << c << endl;

    return;
}

u_int64_t Factorial(u_int64_t n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * Factorial(n - 1);
}

int main()
{
    int a(42);
    int b(13);

    int s(Sum(a, b));

    cout << s << endl;
    double d(43.234);
    char c('@');
    DoSomething(d, c);

    cout << Factorial(5) << endl;

    return 0;
}
