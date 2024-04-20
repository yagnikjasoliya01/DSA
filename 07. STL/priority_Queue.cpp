#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //max-heap
    priority_queue<int> maxi;

    //min-heap
    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(4);
    maxi.push(5);
    maxi.push(9);
    maxi.push(0);
    maxi.push(2);
    cout<<"size:"<<maxi.size()<<endl;

    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();     }

    mini.push(4);
    mini.push(5);
    mini.push(9);
    mini.push(0);
    mini.push(2);

    int m=mini.size();
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();   } 

    cout<<endl;
    cout<<"empty or not:"<<mini.empty()<<endl;

return 0;
}