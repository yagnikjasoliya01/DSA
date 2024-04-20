#include<iostream>
using namespace std;

int findunique(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}

int main()
{
    int arr[5]={1,3,2,3,1};

    findunique(arr,5);
    
return 0;
}

