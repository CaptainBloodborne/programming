#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
//    int *p;
//    double arr[] = {1.34, 2.34, 3.56, 4.67, 5.78, 6.34,7.67, 8.74, 9.23, 10.34, 11.45, 12.23, 13.43, 14.23, 15.00};
//    cout << &arr[2] << endl;
//    cout << &arr[3] << endl;

//    double *p1 = &arr[2];

//    cout << "p1: " << p1[-2] << endl;

//    p1 = p1 + 1;

//    cout << "p1: " << p1 << endl;

//    cout << p << endl;

//     const char *err[] = {
//         "Cannot Open File\n",
//         "Read Error\n",
//         "Write Error\n",
//         "Media Failure\n"
//     };

// // cout << err << endl;
// // cout << err[0];
// // cout << err[0][0] << endl;

//     int arr1[] = {1, 2 ,3};
//     int arr2[] = {4, 5 ,6};
//     int arr3[] = {7, 8 ,9};

//     int *arr_p[] = {
//         arr1, arr2, arr3
//     };

//     cout << arr_p[0] << endl;
//     cout << arr_p[2] << endl;
//     cout << &arr_p[2][0] << endl;

//     int **ptp(arr_p);

char *p;

p = (char *)malloc(10000000000);

if(!p) {
    printf("Out of memory.\n");
    return 1;
}

for (long int i(0); i < 10000000000; i++)
{
    p[i] = '@';
}

int i(45398);

free(p);

printf("Memory is freed. \n");

    return 0;
}
