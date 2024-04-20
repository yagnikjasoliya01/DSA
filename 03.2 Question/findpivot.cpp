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
            e = mid;
        }
        mid=s+(e-s)/2;
        
    }
    return s;
}

int main()
{
    int even[6]={1,7,3,6,5,6};

    cout<<"pivot is:"<<getpivot(even,5)<<endl;
   


return 0;
}