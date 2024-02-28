#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
int main()
{
using namespace std;
int a1[] = { 0, 1, 2, 3, 4 };
int a2[] = { 5, 6, 7, 8, 9 };
// Объявление стандартного контейнера - вектор элементов
vector<int> v(10);
// Слияние двух массивов в вектор
merge(a1, a1 + 5, a2, a2 + 5, v.begin());
// Копирование элементов вектора в поток вывода
copy(v.begin(), v.end(), ostream_iterator<int>(cout));
cout << endl;
// Копирование элементов вектора в поток вывода
copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
cout << endl;
return 0;
}