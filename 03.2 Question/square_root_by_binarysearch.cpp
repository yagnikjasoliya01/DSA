#include<iostream>
using namespace std;

long long int binarysearch(int n)
{
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;   //(start+end)/2
    long long int ans=-1;

    while(s<=e)
    {
        long long int square = mid*mid;
       
        if(square==n)
        {
            return mid;
        }

        //go to right part
        if(square<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }

        mid=s+(e-s)/2;  //(start+end)/2 
    }
    return ans;
}


int main()
{
    int x;
    cout<<"enter a number"<<endl;
    cin>>x;

    cout<<"square root of number is:"<<binarysearch(x)<<endl;



return 0;
}