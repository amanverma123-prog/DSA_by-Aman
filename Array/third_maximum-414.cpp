// Leetcode - 414

// #include<iostream>
// #include<climits>
// using namespace std;

// int thirdMaximum(int arr[], int n){
//     int largest = INT_MIN;
//     int secLargest = INT_MIN;
//     int thirdLargest = INT_MIN;
//     if(n<2) return largest;
//     for(int i = 0;i<n;i++){
//         if(arr[i] == largest || arr[i] == secLargest || arr[i] == thirdLargest)
//             continue;

//         if(largest < arr[i]){
//             thirdLargest = secLargest;
//             secLargest = largest;
//             largest = arr[i];
//         }
//         else if(secLargest < arr[i]){
//             thirdLargest = secLargest;
//             secLargest = arr[i];
//         }
//         else if(thirdLargest < arr[i]){
//             thirdLargest = arr[i];
//         }
//     }
//     if(thirdLargest == INT_MIN)
//         return largest;
//     return thirdLargest;
// }

// int main(){
//     int arr[] = {1,2,2,5,3,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Third maximum : "<<thirdMaximum(arr,n);
//     return 0;
// }


// vector form
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int thirdMaximum(vector<int> &nums){
    int largest = INT_MIN;
    int secLargest = INT_MIN;
    int thirdLargest = INT_MIN;
    for(int i = 0;i<nums.size();i++){
        if(nums[i] == largest || nums[i] == secLargest || nums[i] == thirdLargest)
            continue;
        if(nums[i] > largest){
            thirdLargest = secLargest;
            secLargest = largest;
            largest = nums[i];
        }
        else if(nums[i] > secLargest){
            thirdLargest = secLargest;
            secLargest = nums[i];
        }
        else if(nums[i] > thirdLargest){
            thirdLargest = nums[i];
        }
    }
    if(thirdLargest == INT_MIN)
        return largest;
    return thirdLargest;
}
int main(){
    vector<int> nums= {1,2,2,5,3,5};
    cout<<"Third maximum : "<<thirdMaximum(nums);
    return 0;
}