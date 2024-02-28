#include <iostream>
<<<<<<< HEAD
#include <algorithm>
#include <iterator>
#include <map>

int main()
{
    using namespace std;

    map<char, int> m;
    int i;

=======
#include <iterator>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    map<char, int> m;
    int i;
>>>>>>> 1a27688 (21_02)
    // put pairs into map
    for(i=0; i<26; i++) 
    {
        m.insert(pair<char, int>('A'+i, 65+i));
<<<<<<< HEAD
        // m.insert(make_pair((char)('A'+i), 65+i)); // alternative with make_pair()
=======
>>>>>>> 1a27688 (21_02)
    }

    char ch;
    cout << "Enter key: ";
    cin >> ch;

    map<char, int>::iterator p;

    // find value given key
    p = m.find(ch);
<<<<<<< HEAD
    if(p != m.end())
        cout << "Its ASCII value is " << p->second << endl;
    else
        cout << "Key not in map." << endl;


    return 0;
}
=======

    if(p != m.end())
        cout << "It's ASCII value is " << p->second << endl;
    else
        cout << "Key not in map.\n";

    return 0;
}
>>>>>>> 1a27688 (21_02)
