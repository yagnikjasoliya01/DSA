#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;

    char op;
    cout<<"enter operation you want";
    cin>>op;
    switch (op)

    {
    case '*':cout<<"the mul os a and b is:"<<a*b<<endl;
        break;

    case '+':cout<<"the sum of a and b is:"<<a+b<<endl;
        break;

    case '-':cout<<"the sub of a and b is:"<<a-b<<endl;
        break;

    case '/':cout<<"the div of a and b is:"<<a/b<<endl;
        break;
    
    default:
        break;
    }
// return 0;
}