#include<iostream>
using namespace std;

int printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sortone(int arr[],int n)
{
    int left=0,right=n-1;

    while(left<right)
    {
        while(arr[left] == 0 && left<right)
        {
            left++;
        }
        while(arr[right] == 1 && left<right)
        {
            right--;
        }

        if (left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        

    }
}

int main()
{
    int arr[8]={0,1,0,0,1,0,1,0};

    sortone(arr,8);
    printarray(arr,8);
}