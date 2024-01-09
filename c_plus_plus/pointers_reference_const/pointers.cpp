#include <iostream>
#include <limits>

int main()
{
    using namespace std;
    int x(42);

    int* pointer(&x);

    ++x;

    cout << *pointer << endl;

    return 0;
}