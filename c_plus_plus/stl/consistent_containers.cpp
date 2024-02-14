#include <iostream>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <iterator>

using namespace std;

template<typename T>
void print_container(const T& container)
{
    for (size_t i(0); i < container.size(); i++)
    {
        cout << container[i] << '\t';
    }
    cout << endl;
}

template<typename T>
void print_list(const list<T>& lst)
{
    for (int i: lst)
    {
        cout << i << '\t';
    }
    cout << endl;
}

int main()
{
    // Массив
    array<int, 3> arr({1, 2, 3}); // обертка над низукоуровневым массивом T[N]
    print_container(arr);

    // Double-ended que, хранится в отдельных страницах (непрерывных блоках) памяти фиксированного размера
    deque<int> deq({1, 2, 3, 4});

    print_container(deq);

    deq.push_back(5);
    deq.push_back(6);

    print_container(deq);

    deq.push_front(0);
    deq.push_front(-1);
    print_container(deq);
    deq.pop_front();

    print_container(deq);

    // list двусвязный список
    list<int> lst({10, 15, 20});
    print_list(lst);

    lst.push_front(5);
    lst.push_front(0);

    print_list(lst);

    lst.push_back(25);
    lst.push_back(30);

    print_list(lst);

    lst.pop_back();
    lst.pop_front();

    print_list(lst);

    // Итераторы списка
    list<int> lst2({10, 15, 20});
    for (auto iter(lst2.begin()); iter != lst2.end(); ++iter)
    {
        cout << *iter << endl;
    }
    for (auto iter(lst2.rbegin()); iter != lst2.rend(); ++iter)
    {
        cout << *iter << endl;
    }

    list<int> lst3 = {0, 10, 15, 20};

    auto iter(lst3.begin());
    cout << *iter << endl;
    ++iter;
    cout << *iter << endl;
    lst.insert(iter, 5);
    print_list(lst3);

    for (auto iter(lst3.begin()); iter != lst3.end();)
    {
        if (*iter % 2 == 0)
        {
            iter = lst3.erase(iter); // возвращается итератор на элемент, следующий за удалённым
        } else {
            ++iter;
        }
    }
    print_list(lst3);

    list<int> lst4 = {0, 10, 15, 20};

    auto iter2(next(lst4.begin()));

    cout << "iter2*: " << *iter2 << endl;

    advance(iter2, 2);

    cout << "iter2*: " << *iter2 << endl;

    // forward list - односвязный список
    cout << "forward list: " << endl;
    forward_list<int> fwd_list({3, 42, 5});
    fwd_list.push_front(2);

    auto iter3(next(fwd_list.begin()));

    iter3 = fwd_list.erase_after(iter3);
    fwd_list.insert_after(iter3, 4);

    for (int i : fwd_list)
    {
        cout << i << '\t';
    }
    cout << endl;

    return 0;
}