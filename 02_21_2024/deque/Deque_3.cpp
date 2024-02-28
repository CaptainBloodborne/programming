#include <iostream>
#include <algorithm>
#include <iterator>
#include <deque>

using namespace std;


void print(int i)
{

    cout << i << " ";
}

int main()
{
    deque<int> d;

    for (int i(0); i < 10; i++)
    {
        d.push_back(i);
    }

    for_each(d.begin(), d.end(), print);
    cout << endl;

    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
