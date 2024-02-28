#include <iostream>
#include <algorithm>
#include <iterator>
#include <deque>

int main()
{
    using namespace std;

    deque<int> d;
    deque<int> d2(10);
    deque<int> d3;

    for (int i(0); i < 10; i++)
    {
        d.push_back(i);
    }

    // Копирование содержимого первого дека в дек, с таким же размером

    copy(d.begin(), d.end(), d2.begin());
    cout << "Deque is empty?" << endl;
    if (d2.empty())
        cout << "Yes";
    else
        cout << "No";
    cout << endl;

    cout << "Deque size: " << d2.size() << endl;
    copy(d2.begin(), d2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // Попытка скопировать содержимое первого дека в пустой дек
    copy(d.begin(), d.end(), d3.begin());
    cout << "Deque size: " << d3.size() << endl;
    copy(d3.begin(), d3.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
