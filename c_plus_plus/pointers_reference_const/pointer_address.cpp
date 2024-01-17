#include <iostream>

struct Point {
    int x;
    int y;
    int z;
};
 

int main() {

    using namespace std;

    int x = 1, y = 2, z = 3;

    cout << &x << endl;

    cout << &y << endl;

    cout << &z << endl;

    cout << sizeof(int) << endl;

    int* pointer;

    cout << pointer << endl;

    Point* Ppointer;

    cout << Ppointer << endl;

    return 0;

}
