#include<iostream>
using namespace std;

int getpivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid=s+(e-s)/2;
        
    }
    return s;
}

int binarysearch(int arr[],int s,int e,int key)
{
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;   //(start+end)/2

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        //go to right part
        if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }

        mid=start+(end-start)/2;  //(start+end)/2 
    }
    return -1;
}

int main()
{
    int key;
    int n;
    int arr[7]={4,5,6,8,1,2,3};

    int pivot=getpivot(arr, 7);

    if(key>=arr[pivot] && key<=arr[n-1])
    {
        return binarysearch(arr,pivot,n-1,key);
    }
    else{
        return binarysearch(arr,0,pivot-1,key);
    }
return 0;
}