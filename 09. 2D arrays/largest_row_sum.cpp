#include<iostream>
using namespace std;

// int LargestRowSum(int arr[][3],int row,int col)
// {
//     int maxi = INT_MIN;
//     int rowindex = -1;

//     for(int row=0;row<3;row++)
//     {
//         int sum = 0;
//         for(int col=0 ;col<3;col++)
//         {
//             sum +=arr[row][col];
//         }
//         if(sum > maxi)
//         {
//             sum = maxi;
//             rowindex = row;
//         }
//     }
//     cout<<" Maximum sum is:"<<maxi;
//     return rowindex;
// }

int LargestRowSum(int arr[][3], int row, int col) {

    int maxi = 0;
    int rowIndex = -1;

    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }

        if(sum > maxi ) {
            maxi = sum;
            rowIndex = row;
        }
       
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
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


cout<<"max row is at index:"<<LargestRowSum(arr,3,3)<<endl;

return 0;
}