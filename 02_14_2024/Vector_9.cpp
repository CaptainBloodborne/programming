#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	const int a[] = { 0, 1, 2, 3, 4 };

	// Объявление стандартного контейнера - вектор элементов
	vector<int> v(5);
	// Объявление итератора произвольного доступа
	vector<int>::iterator to_from = v.begin();

	// Копирование элементов массива в вектор
	copy(a, a + 5, to_from);
	// Копирование элементов вектора в поток вывода
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << *(to_from + 4) << endl;
	cout << *(to_from += 3) << endl;
	cout << *++to_from << endl;
	for (to_from = v.begin(); to_from < v.end(); ++to_from)
		cout << *to_from << ' ';
	cout << endl;

	return 0;
}
