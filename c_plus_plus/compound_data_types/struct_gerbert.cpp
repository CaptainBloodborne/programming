#include <iostream>
#include <bitset>

using namespace std;

enum e {A, B, C};

union u_type {
short int i;
char ch[2];
};

struct compound {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr1[5] =  {98, 12, 13, 14, 15};
};

int main()
{
    int a(A);
    cout << a << endl;
    compound cmp;

    // cout << cmp.arr1[5] << endl;
    u_type uni_example;

    uni_example.i = 1000;

    cout << static_cast<short int>(uni_example.i) << endl;
    cout << bitset<16>(uni_example.i) << endl;

    cout << static_cast<short int>(uni_example.ch[0]) << endl;
    cout << bitset<8>(uni_example.ch[0]) << endl;

    // u_type *p(&uni_example);

    // cout << p << endl;

    return 0;
}
