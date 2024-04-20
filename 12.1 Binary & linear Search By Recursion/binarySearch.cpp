#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int s, int e, int key)
{
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
        return true;

    if (mid < key)
    {
        return BinarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return BinarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[5] = {2, 4, 8, 10, 14};
    int size = 5;
    int key = 1;
    int s = arr[0];
    int e = arr[size - 1];

    int ans = BinarySearch(arr, s, e, key);
    
    cout<<"present or not "<<ans<<endl;

    return 0;
}