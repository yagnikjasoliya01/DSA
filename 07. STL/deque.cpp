#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }

    // d.pop_front();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }

    cout<<endl;
    cout<<"element at first index is:"<<d.at(1)<<endl;

    cout<<"first element is:"<<d.front()<<endl;
    cout<<"last element is:"<<d.back()<<endl;

    cout<<"empty or not:"<<d.empty()<<endl;

    cout<<"before erase size is:"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase size is:"<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

return 0;
}