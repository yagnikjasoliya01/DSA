// #include<iostream>
// using namespace std;

// int selectionsort(int arr[],int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         int minindex=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<arr[minindex])
//                 minindex=j;
//         }
//         swap(arr[minindex],arr[i]);
//     }
// }

// int main()
// {
//     int arr[7]={2,8,6,4,3,7,1};

// cout<<"sorted array is:"<<selectionsort(arr,7);
// return 0;
// }



#include<iostream>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}