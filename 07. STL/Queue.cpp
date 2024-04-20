#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;//first in first out

    q.push("love");
    q.push("bubbar");
    q.push("patel");

    cout<<"size before pop:"<<q.size()<<endl;

    cout<<"first element is:"<<q.front()<<endl;
    q.pop();
    cout<<"first element is:"<<q.front()<<endl;

    cout<<"size after pop:"<<q.size()<<endl;
return 0;
}