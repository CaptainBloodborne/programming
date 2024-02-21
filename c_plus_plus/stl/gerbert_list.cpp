#include <iostream>
#include <list>
#include <algorithm>
#include <cstdlib>
#include <iterator>

using namespace std;

int main ()
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

    // change contents of list
    p = lst.begin();
    while(p != lst.end()) {
    *p = *p + 100;
    p++;
    }
    cout << "Contents modified: ";
    p = lst.begin();
    while(p != lst.end()) {
        cout << *p << " ";
        p++;
    } 
    cout << endl;

    list<int> lst2;
    int j;

    for (j = 0; j < 10; j++) lst2.push_front(j);

    list<int>::iterator p2;

    cout << "Contents of lst2:\n";
    p = lst2.begin();
    while(p != lst2.end()) 
    {
    cout << *p << " ";
    p++;
    }

    list<int> lst3;
    // int k;

    for (int i(0); i < 10; i++)
    {
        lst3.push_back(rand());
    }

    cout << "Origin contents:" << endl;
    copy(lst3.begin(), lst3.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // sort list
    lst3.sort();

    cout << "Sorted contents:" << endl;
    copy(lst3.begin(), lst3.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
