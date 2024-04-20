#include<iostream>
using namespace std;
//1 -> prime no.
//0 -> not a prime no.
int isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%2==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;

    if(isPrime(n))
    {
        cout<<"is a prime num.";
    }
    else{
        cout<<"is not a prime num.";
    }
}