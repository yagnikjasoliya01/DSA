#include<iostream>
using namespace std;

long long int squarerootinteger(int n)
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

/*int precesion - how many decimal number you want*/
double moreprecision(int n,int precision,int tempsol)
{
    double fector=1;
    double ans=tempsol;

    for(int i=0;i<precision;i++)
    {
        fector=fector/10;
        for(double j=ans; j*j<n; j=j+fector)
        {
            ans = j;
        }
    }
    return ans; 
}    

int main()
{
    int x;
    cout<<"enter a number"<<endl;
    cin>>x;

    int tempsol = squarerootinteger(x);

    cout<<"Answer is:"<<moreprecision(x,3,tempsol)<<endl;

return 0;
}