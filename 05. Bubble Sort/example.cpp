#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;//it is use for achieve optimize sol. 
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;//it is use for achieve optimize sol. 
            }
            
        }
        
        if(swapped == false) {//it is use for achieve optimize sol. 
            //already sorted
            break;
        }
           
    }
}