//Sort 0's and 1's
// making 0 and 1 in ascending order
#include <iostream>
#include <algorithm>
using namespace std;

// void sortZeroOne(int arr[],int n){
//     //counting
//     int zeroCount = 0;
//     int oneCount = 0;

//     for(int i=0; i<n; i++){
//         if(arr[i] == 0)
//          zeroCount++;
//         if(arr[i] ==1)
//          oneCount++;  
//     }

    //insertion 
    // using fill method
    // fill(arr,arr+zeroCount,0);
    // fill(arr+zeroCount, arr+n ,1);
    // for(int i= 0; i<zeroCount; i++ ){
    //     arr[i] = 0;
    // }
    // for(int i = zeroCount; i<n; i++ ){
    //     arr[i] = 1;
    // }
    
// }


int main(){
    int arr[] = {0,1,1,1,0,0,1};
    int size = 7;
    //calling function
    // sortZeroOne(arr, size);
    // printing array
    sort(arr,arr+size);
    for(int i= 0; i<size; i++){
        cout<<arr[i]<< " ";
    }
}

