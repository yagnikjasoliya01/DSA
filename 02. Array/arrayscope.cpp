#include<iostream>
using namespace std;

int update(int arr[],int n)
{
    cout<<endl<<"inside the function"<<endl;

    //updating the array 
    arr[0]=11111;

    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";  
    }cout<<endl;

    cout<<"going back to main function";
}

int main()
{
    int arr[3]={23,4,6};

    update(arr,3);

    cout<<endl<<"printing in main function"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";  
    }
    return 0;
}