#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;//first in last out

    s.push("love");
    s.push("bubbar");
    s.push("patel");

    cout<<"top element is:"<<s.top()<<endl;

    s.pop();
    cout<<"top element is:"<<s.top()<<endl;

    cout<<"size is:"<<s.size()<<endl;

    cout<<"empty or not:"<<s.empty()<<endl;
return 0;
}