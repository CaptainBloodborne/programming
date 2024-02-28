#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <cstdlib>

using namespace std;

bool dividesBy3(int i)
{
    if((i%3) == 0) return true;
    return false;
}


int main()
{
    vector<bool> v;
    unsigned int i;

    for(i=0; i < 10; i++) 
    {
        if(rand() % 2) v.push_back(true);
        else v.push_back(false);
    }

    cout << "Sequence:\n";
    for(i=0; i<v.size(); i++)
        cout << boolalpha << v[i] << " ";
    cout << endl;

    i = count(v.begin(), v.end(), true);
    cout << i << " elements are true.\n";

    vector<int> v2;

    for(i=1; i < 20; i++) v2.push_back(i);
        cout << "Sequence:\n";

    for(i=0; i<v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;
    
    i = count_if(v2.begin(), v2.end(), dividesBy3);
    cout << i << " numbers are divisible by 3.\n";

    return 0;
}