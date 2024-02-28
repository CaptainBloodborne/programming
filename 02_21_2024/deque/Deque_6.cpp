#include <iostream>
#include <algorithm>
#include <iterator>
#include <deque>

int main()
{
    using namespace std;
    deque<int> d({3, 9, 5, 1, 7, 2, 8});

    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

    // Сортировка дека
    sort(d.begin(), d.end());

    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

    // Перестановка значений
    swap(d[0], d[6]);
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

    swap(d[0], *(d.end() - 1));
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

    // Перестановка последовательности
    swap_ranges(d.begin(), d.begin() + 3, d.end() - 3);
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

    return 0;
}
