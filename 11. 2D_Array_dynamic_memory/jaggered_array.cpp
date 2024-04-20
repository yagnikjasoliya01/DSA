#include<iostream>
using namespace std;
int main()
{
    int row,col;
    row=3;

    //creating jaggered array
    int** arr = new int*[row];
    int* size = new int[row];   
    for(int i=0 ; i<row ;i++)
    {
        cin>>col;
        size[i]=col;
        *(arr + i)=new int[size[i]];
    }

    //taking input
    for(int i=0; i<row ; i++)
    {
        for(int j=0 ; j<size[i] ;j++)
        {
            cin>>arr[i][j];
        }
    }

    //giving output
    cout<<endl;
    for(int i=0; i<row ; i++)
    {
        for(int j=0 ; j<size[i] ;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // //releseing memory
    // for(int i=0 ; i<row ;i++)
    // {
    //     delete [] arr[i];
    // }

    // delete [] arr;
return 0;
}