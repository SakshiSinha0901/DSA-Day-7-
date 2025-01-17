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

//AGAIN
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
//Print TRIPLETS 
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void printAllTriplets(int arr[], int n){
//     int count = 0;
//     for(int i=0; i<n ;i++){
//         for(int j=0; j<n; j++ ){
//             for(int k=0; k<n; k++){
//                 cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
//                 count++;
//             }
//         }
//     }
//     cout<<"Total number of triplets:"<<count<<endl;
// }
// int main(){
//     int arr[]= {10,20,30,40};
//     int n= 4;
//     printAllTriplets(arr,n);
    
// }

// Leetcode question
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public: 
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int>ans;
        int n = nums.size();
        for(int i =0; i<n; i++){
            for (int j=0; j<n ; j++){
                if(ans[i] + ans[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
    }    
};
int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = sol.twoSum(nums, target);
    
    cout << "Indices: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
//Three sum
// #include <iostream>
// #include <vector>
// using namespace std;

// void checkThreeSum(int arr[],int n,int target){
//     for(int i=0; i<n; i++ ){
//         for(int j=i+1; j<n; j++ ){
//             for(int k=j+1; k<n; k++ ){
//                 if (arr[i]+arr[j]+arr[k]== target){
//                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//                 }
//             }
//         }
//     }
// }
// int main(){
//     int arr[]= {10,20,30,40};
//     int n = 4;
//     int target = 70;
//     checkThreeSum(arr,n,target);
// }

// Shifting an array
#include <iostream>
#include <vector>
using namespace std;
void rotateArray(int arr[],int size,int shift){
    int finalShift = shift%size;
    if (finalShift==0){
        //no need to do anything
        return;
    }
    // copy last two element to temp
    int temp[1000];
    int index = 0;
    for(int i =size-finalShift; i<size; i++){
        temp[index] = arr[i];
        index++;
    }
    //step2: shift array elements by finalshift places
    for(int i= size-1; i>=0; i--){
        arr[i]= arr[i-finalShift];
    }
    //step3: copy temp elements into original array
    for(int i=0; i<finalShift; i++){
        arr[i]= temp[i];
    }
}
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int shift = 2; // Cyclically rotate array by 2

    cout << "Before: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotateArray(arr, size, shift);

    cout << "After: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
