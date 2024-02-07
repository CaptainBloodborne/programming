#include <bitset>
#include <iostream>

using namespace std;

class base 
{
public:
    int i;
    base() {cout << "base init" << endl;}
    ~base() { cout << "base destroy" << endl;}
};

// derived1 inherits base.
class derived1 : public base 
{
public:
    int j;
    derived1() {cout << "derived1 init" << endl;}
    ~derived1() {cout << "derived1 destroy" << endl;}
};

// derived2 inherits base.
class derived2 : public base 
{
public:
    int k;
    derived2() {cout << "derived2 init" << endl;}
    ~derived2() {cout << "derived2 destroy" << endl;}
};

/* derived3 inherits both derived1 and derived2.
This means that there are two copies of base
in derived3! */
class derived3 : public derived1, public derived2 
{
public:
    int sum;
    derived3() {cout << "derived3 init" << endl;}
    ~derived3() {cout << "derived3 destroy" << endl;}
};

int main()
{
    bitset<8> b = 10;
    derived3 ob;
    ob.sum = 10; // this is ambiguous, which i???
    ob.j = 20;
    ob.k = 30;
    // i ambiguous here, too
    // ob.sum = ob.derived1::i + ob.j + ob.k;
    // also ambiguous, which i?
    // cout << ob.derived1::i << " ";
    // cout << ob.j << " " << ob.k << " ";
    // cout << ob.sum;
    cout << b[2] << endl;

    return 0;
}
