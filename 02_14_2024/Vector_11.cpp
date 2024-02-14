#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	int a1[] = { 0, 0 };
	int a2[] = { 1, 2, 3 };
	int a3[] = { 1, 1, 1 };

	// Объявление стандартного контейнера - вектор элементов
	vector<int> v(2);

	// Копирование элементов массива в вектор
	copy(a1, a1 + 2, v.begin());
	// Копирование элементов вектора в поток вывода
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// Копирование элементов массива в вектор
	copy(a2, a2 + 3, back_inserter(v));
	// Копирование элементов вектора в поток вывода
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// Объявление итератора произвольного доступа
	vector<int>::iterator to_from = v.begin();
	// Инкрементирование итератора на 4
	advance(to_from, 4);
	// Копирование элементов массива в вектор
	copy(a3, a3 + 3, inserter(v, to_from));
	// Копирование элементов вектора в поток вывода
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
