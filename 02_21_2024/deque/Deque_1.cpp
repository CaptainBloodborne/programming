#include <iostream>
#include <algorithm>
#include <iterator>
#include <deque>

int main()
{
    using namespace std;

    // Объявление стандартного контейнера - дек элементов
    deque<int> d;

    cout << "Deque is empty?" << endl;
    if (d.empty())
        cout << "Yes";
    else
        cout << "No";
    cout << endl;

    cout << "Deque size: " << d.size() << endl;

    // Добавление элемента в конец дека
    d.push_back(5);

    cout << "Deque is empty?" << endl;
    if (d.empty())
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    cout << "Deque size: " << d.size() << endl;

    // Добавление элемента в начало дека
    d.push_front(4);

    cout << "Deque is empty?" << endl;
    if (d.empty())
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    cout << "Deque size: " << d.size() << endl;
    
    d.push_back(6);
    d.push_front(3);

    cout << "Deque is empty?" << endl;
    if (d.empty())
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    cout << "Deque size: " << d.size() << endl;

    d.push_back(7);
    d.push_front(2);

    cout << "Deque is empty?" << endl;
    if (d.empty())
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    cout << "Deque size: " << d.size() << endl;

    d.push_back(8);
    d.push_front(1);

    cout << "Deque is empty?" << endl;
    if (d.empty())
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    cout << "Deque size: " << d.size() << endl;

    d.push_back(9);
    d.push_front(0);

    cout << "Deque is empty?" << endl;
    if (d.empty())
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    cout << "Deque size: " << d.size() << endl;
    
    // Копирование элементов дека в поток вывода
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // Вставка с помощью итератора вставки
    copy(d.begin(), d.begin() + 3, inserter(d, d.end()));
    cout << "Deque size: " << d.size() << endl;
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
