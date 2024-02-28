#include <iostream>
#include <algorithm>
#include <iterator>
#include <deque>

int main()
{
    using namespace std;
    deque<int> d;

    cout << "Deque is empty?" << endl;
    if (d.empty())
        cout << "Yes";
    else
        cout << "No";

    for (int i(0); i < 10; i++)
    {
        d.push_back(i);
    }

    // Масштабирование дека
    cout << endl;
    cout << "Deque size: " << d.size() << endl;
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    d.resize(5);
    cout << "Deque size: " << d.size() << endl;
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    d.resize(10);
    cout << "Deque size: " << d.size() << endl;
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    d.resize(15, -1);
    cout << "Deque size: " << d.size() << endl;
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // Удаление элемента
    d.erase(d.end() - 10);
	cout << "Deque size: " << d.size() << endl;
	copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	d.erase(d.begin() + 2, d.end());
	cout << "Deque size: " << d.size() << endl;
	copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

    // Очитска дека
	d.clear();
	cout << "Deque size: " << d.size() << endl;

    return 0;
}
