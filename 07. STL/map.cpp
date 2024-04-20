#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;

    m[1]="babbar";
    m[10]="yagnik";
    m[5]="patel";

    m.insert({7,"bheem"});
   
    cout<<"before erase:"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13:"<<m.count(13)<<endl;

    m.erase(5);
    cout<<"after erase:"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    auto it=m.find(7);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;     
    }
return 0;
}