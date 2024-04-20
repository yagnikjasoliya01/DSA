#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5,1);
    vector<int> last(a);
     cout<<"print:"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(3);//for add a element
    cout<<"capacity:"<<v.capacity()<<endl;//vector convert in double capacity
    cout<<"size:"<<v.size()<<endl;

    cout<<"element at second index:"<<v.at(2)<<endl;

    cout<<"first element is:"<<v.front()<<endl;
    cout<<"last element is:"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();//for delete element

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size:"<<v.size()<<endl;
    v.clear();
    cout<<"after clear size:"<<v.size()<<endl;



return 0;
}