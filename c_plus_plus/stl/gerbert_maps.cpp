#include <iostream>
#include <algorithm>
#include <iterator>
#include <map>

int main()
{
    using namespace std;

    map<char, int> m;
    int i;

    // put pairs into map
    for(i=0; i<26; i++) 
    {
        m.insert(pair<char, int>('A'+i, 65+i));
        // m.insert(make_pair((char)('A'+i), 65+i)); // alternative with make_pair()
    }

    char ch;
    cout << "Enter key: ";
    cin >> ch;

    map<char, int>::iterator p;

    // find value given key
    p = m.find(ch);
    if(p != m.end())
        cout << "Its ASCII value is " << p->second << endl;
    else
        cout << "Key not in map." << endl;


    return 0;
}
