#include <iostream>
#include <algorithm>
#include <list>


using namespace std;

// A simple transformation function.
double reciprocal(double i) {
    return 1.0/i; // return reciprocal
}

int main()
{
    list<double> vals;
    int i;

    // put values into list
    for(i=1; i<10; i++) vals.push_back((double)i);

    cout << "Original contents of vals:\n";
    list<double>::iterator p = vals.begin();
    while(p != vals.end()) 
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    // transform vals
    p = transform(
        vals.begin(), 
        vals.end(),
    vals.begin(),
    reciprocal
    );

    cout << "Transformed contents of vals:\n";
    p = vals.begin();
    while(p != vals.end()) 
    {
        cout << *p << " ";
        p++;
    }

    return 0;
}