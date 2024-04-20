#include<iostream>
using namespace std;

bool isSorted(int arr[],int size)
{
    if(size==0 || size==1)
    {
        return true;
    }

    if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        int ans = isSorted(arr+1,size-1);
        return ans;
    }
}

int main()
{
    int arr[5] = {1,2,3,8,5};
    int size = 5;

    int ans = isSorted(arr , size);

    if(ans)
    {
        cout<<"array is sorted";
    } 
    else{
        cout<<"array is not sorted";
    }
return 0;
}