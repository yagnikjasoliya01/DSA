#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid]<key)
        {
            s = mid + 1;
        }
        else if (arr[mid]>key)
        {
            e = mid - 1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
}

int lastocc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid]<key)
        {
            s = mid + 1;
        }
        else if (arr[mid]>key)
        {
            e = mid - 1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
}

int main()
{
    int even[6]={1,2,3,3,3,4};

    cout<<"first occurrence of 3 is at index:"<<firstocc(even,6,8)<<endl;
    cout<<"last occurrence of 3 is at index:"<<lastocc(even,6,8);


return 0;
}