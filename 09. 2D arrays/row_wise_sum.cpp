#include<iostream>
using namespace std;

int printrowsum(int arr[][3],int row,int col)
{
    cout<<"row wise sum is:";
    for(int i=0;i<3;i++)
    {
        int sum = 0;
        for(int j=0;j<3;j++)
        {
            sum +=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int printcolsum(int arr[][3],int row,int col)
{
    cout<<"col wise sum is:";
    for(int j=0;j<3;j++)
    {
        int sum = 0;
        for(int i=0;i<3;i++)
        {
            sum +=arr[i][j];
        }
        cout<<sum<<" ";
    }
}

int main()
{
    int arr[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printrowsum(arr,3,3);
    printcolsum(arr,3,3);

return 0;
}   