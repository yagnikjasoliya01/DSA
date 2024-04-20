#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(9);

    cout<<"finding 6:"<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"lower bound:"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound:"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=7;

    cout<<"max:"<<max(a,b);
    cout<<endl;
    cout<<"min:"<<min(a,b);

    swap(a,b);
    cout<<endl<<"a:"<<a<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"reverse string is:"<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate:"<<endl;
    for(int i:v){
        cout<<i<<" ";   
    }

return 0;
}