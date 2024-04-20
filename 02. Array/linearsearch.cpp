#include<iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int key;
    cout<<"enter the element to search for:"<<endl;
    cin>>key;

    int arr[10]={1,45,35,521,-54,-55,954,-54,0,1};

    bool found=search(arr,10,key);

    if(found)
    {
        cout<<"key is present";
    }
    else{
        cout<<"key is not present";
    }


return 0;
}