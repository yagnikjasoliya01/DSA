#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size ,int key)
{
    if(size == 0) return false;

    if(arr[0]==key)
    {
        return true;
    }
    else{
        return linearSearch(arr+1 , size-1 , key);
    }
}

int main()
{
    int arr[5] = {2,5,6,7,8};
    int size = 5;
    int key = 1;

    int ans = linearSearch(arr , size , key);

    if(ans)
    {
        cout<<"key is present in array";
    }
    else{
        cout<<"key is not present in array";
    }
return 0;
}