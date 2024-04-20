#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int *ptr = &arr[0];

    cout << sizeof(arr) << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&arr) << endl;

    return 0;
}