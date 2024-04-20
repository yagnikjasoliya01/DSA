#include<iostream>
using namespace std;

int printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sortone(int arr[],int n)
{
    int low = 0, mid = 0, high = n-1;
    
    while(mid<=high){
        
         switch(arr[mid]){
             case 0:
                 swap(arr[low], arr[mid]);
                 low++;
                 mid++;
                 break;
             case 1:
                 mid++;
                 break;
             case 2:
                 swap(arr[mid], arr[high]);
                 high--;
                 break;
         }
    }
}

int main()
{
    int arr[8]={2,1,0,2,1,2,1,0};

    sortone(arr,8);
    printarray(arr,8);
}