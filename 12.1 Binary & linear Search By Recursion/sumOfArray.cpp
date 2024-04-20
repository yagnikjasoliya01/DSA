#include<iostream>
using namespace std;

int sumOfArray(int arr[] , int size)
{
    if(size==0) return 0;

    return arr[0] + sumOfArray(arr+1 , size-1);

}

int main()
{
    int arr[5] = {1,3,5,10,8};
    int size = 5;

    int ans = sumOfArray(arr , size);
    cout<<"Sum of array is "<<ans<<endl;

    
return 0;
}