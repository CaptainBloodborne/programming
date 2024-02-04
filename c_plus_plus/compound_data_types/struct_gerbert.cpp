#include <iostream>

using namespace std;

struct compound {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr1[5] =  {98, 12, 13, 14, 15};
};

int main()
{
    compound cmp;

    cout << cmp.arr[10] << endl; 

    return 0;
}