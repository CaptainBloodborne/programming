#include <iostream>
#include <algorithm>
#include <iterator>
int main()
{
using namespace std;
// Объявление итератора потока ввода
istream_iterator<int> in(cin);

// Объявление итератора потока вывода
ostream_iterator<int> out(cout, " 6 – last entered value!\n");

int value;
while ((value = *in) != 6)
{
    *out++ = value;
    in++;
}
return 0;
}
