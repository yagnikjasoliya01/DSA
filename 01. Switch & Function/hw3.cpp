#include<iostream>
using namespace std;

int fibo(int n)
{
    int a=0;
    int b=1;
    for(int i=2;i<n;i++)
    {
        int next=a+b;
        a=b;
        b=next;
    }
    return b;
}

int main()
{
    int n;
    cin>>n;

    cout<<"the"<<n<<"nth term of fibonaci is:"<<fibo(n)<<endl;
}