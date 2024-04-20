#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
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
    int odd[7]={2,4,6,8,10,12,14};
    int even[8]={1,2,3,4,5,6,7,8};

    int oddindex = binarysearch(odd,7 ,14);
    cout<<"index of 14 is:"<<oddindex<<endl;

    int evenindex = binarysearch(even,8,5);
    cout<<"index of 5 is:"<<evenindex<<endl;

return 0;
}