#include <iostream>
#include <algorithm>
#include <iterator>
#include <deque>

int main()
{
    using namespace std;

    int a1[] = { 0, 0 };
	int a2[] = { 1, 2, 3 };
	int a3[] = { 1, 1, 1 };

	deque<int> d(2);

	// Копирование элементов массива в дек
	copy(a1, a1 + 2, d.begin());
	copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	copy(a2, a2 + 3, back_inserter(d));
	copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// Объявление итератора произвольного доступа
	deque<int>::iterator to_from = d.begin();
    
	// Инкрементирование итератора на 4
	advance(to_from, 4);
	copy(a3, a3 + 3, inserter(d, to_from));
	copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

    return 0;
}
