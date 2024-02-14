#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	int a[] = { 0, 1, 2, 3, 4 };

	// Объявление стандартного контейнера - вектор элементов
	vector<int> v(5);

	// Копирование элементов массива в вектор
	copy(a, a + 5, v.begin());
	// Копирование элементов вектора в поток вывода
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	// Копирование элементов вектора в поток вывода
	copy(v.rbegin(), v.rend(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
