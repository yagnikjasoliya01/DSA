#include<iostream>
using namespace std;
//1=even
//0=odd
bool iseven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}
int main()
{
    int num;
    cin>>num;

    if(iseven(num))
    {
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd";
    }

return 0;
}