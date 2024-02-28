#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>


using namespace std;

int main()
{
    list<int> lst; // create an empty list
    int i;

    for(i=0; i<10; i++) lst.push_back(i);
    cout << "Size = " << lst.size() << endl;
    cout << "Contents: ";

    list<int>::iterator p = lst.begin();
    while(p != lst.end()) 
        {
        cout << *p << " ";
        p++;
        }
    cout << "\n\n";

    p = lst.begin();

    advance(p, 4);

    iter_swap(lst.begin(), p);
    cout << "Swap contents:" << endl;
    copy(lst.begin(), lst.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    vector<int> v({1, 2, 3, 4, 5});

    vector<int>::iterator p_V = v.begin();

    copy(v.begin(), v.begin() + 3, ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
