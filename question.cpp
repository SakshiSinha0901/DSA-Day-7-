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

//print all pairs
// #include <iostream>
// #include <algorithm>
// using namespace std;
// void printAllPairs(int arr[],int n){
//     for (int i=0; i<n; i++){
//         for(int j= 0 ; j<n; j++){
//             cout<<arr[i] << "," << arr[j]<< endl;
//         }
//     }
// }

// int main(){
//     int arr[]= {10,20,30,40};
//     int n= 4;
//     printAllPairs(arr, n);
// }

// printing half factor
// #include <iostream>
// #include <algorithm>
// using namespace std;
// void printAllPairs(int arr[],int n){
//     for (int i=0; i<n; i++){
//         for(int j= i ; j<n; j++){
//             cout<<arr[i] << "," << arr[j]<< endl;
//         }
//     }
// }

// int main(){
//     int arr[]= {10,20,30,40};
//     int n= 4;
//     printAllPairs(arr, n);
// }

//knowing different output
// #include <iostream>
// #include <algorithm>
// using namespace std;
// void printAllPairs(int arr[],int n){
//     for (int i=0; i<n; i++){
//         for(int j= n-1 ; j>=i; j++){
//             cout<<arr[i] << "," << arr[j]<< endl;
//         }
//     }
// }

// int main(){
//     int arr[]= {10,20,30,40};
//     int n= 4;
//     printAllPairs(arr, n);
// }
//Two sum
// #include <iostream>
// #include <algorithm>
// using namespace std;

// bool checkTwoSum (int arr[], int n ,int target){
//     //check all pairs
//     for(int i=0; i<n ; i++){
//         for (int j=0; j<n ; j++){
//             if(arr[i] + arr[j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[]= {10,20,30,40};
//     int n= 4;
//     bool ans = checkTwoSum(arr,n,60);
//     if(ans == true){
//         cout<<"Pair found."<<endl;
//     }
//     else{
//         cout<<"Pair not found."<<endl;
//     }
//     return 0;
// }

// by pair method
#include <iostream>
#include <algorithm>
using namespace std;

pair<int,int> checkTwoSum (int arr[], int n ,int target){
    //assuming (-1,-1) as no answer found
    pair<int,int> ans = make_pair(-1,-1);
    for(int i=0; i<n ; i++){
        for (int j=0; j<n ; j++){
            if(arr[i] + arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
            }
        }
    }
    return ans;
}
int main(){
    int arr[]= {10,20,30,40};
    int n= 4;
    pair<int,int> ans = checkTwoSum(arr,n,60);
    if(ans.first == -1 && ans.second == -1 ){
        cout<<"Pair notfound."<<endl;
    }
    else{
        cout<<"Pair found."<<endl;
    }
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

void checkTwoSumAllAns (int arr[], int n ,int target){
    //assuming (-1,-1) as no answer found
    for(int i=0; i<n ; i++){
        for (int j=0; j<n ; j++){
            if(arr[i] + arr[j] == target){
                cout<< arr[i]<< "," << arr[j]<< endl;
            }
        }
    }
    
}
int main(){
    int arr[]= {10,20,30,40};
    int n= 4;
    checkTwoSumAllAns(arr,n,60);
    
}
