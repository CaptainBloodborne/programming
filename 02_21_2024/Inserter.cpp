
#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{
using namespace std;
int a[] = {3,7,6,5,9 };
// Копирование элементов массива в поток вывода
copy(a, a + 5, ostream_iterator<int>(cout, " "));
cout << endl;
// Замена элементов массива 0 -> 2
replace(a, a + 5, 0, 2);
// Замена элементов массива 1 -> 0
replace(a, a + 5, 1, 0);
// Замена элементов массива 2 -> 1
replace(a, a + 5, 2, 1);
// Копирование элементов массива в поток вывода
copy(a, a + 5, ostream_iterator<int>(cout, " "));
cout << endl;
return 0;
}