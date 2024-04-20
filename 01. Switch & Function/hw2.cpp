#include<iostream>
using namespace std;

int setbitsB(int b)
{
    int count=0;
    while(b!=0)
    {
        if(b&1)
        {
            count++;
        }
        b=b>>1;
    }
    return count;
}

int setbitsA(int a)
{
    int count=0;
    while(a!=0)
    {
        if(a&1)
        {
            count++;
        }
        a=a>>1;
    }
    return count;
}

int main()
{
    int a,b;
    cin>>a>>b;

    int ans1=setbitsA(a);
    int ans2=setbitsB(b);

    cout<<"set bits of a is:"<<ans1<<endl;
    cout<<"set bits of a is:"<<ans2<<endl;

    int ans=ans1+ans2;
    cout<<"total bits of a and b is:"<<ans<<endl;
    return 0;

}
