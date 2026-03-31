#include<iostream>
#include<vector>
using namespace std;
// Brute Force
// void zeroEnd(vector<int> a,int n){
//     int j = 0;
//     vector<int> temp;
//     for(int i = 0;i<n;i++){
//         if(a[i] != 0){
//             temp.push_back(a[i]);
//         }
//     }
//     for(int i = 0;i<temp.size();i++){
//         if(temp[i] != 0){
//             a.push_back(temp[i]);
//         }
//     }
//     for(int i = 0;i<n;i++){
//         cout<<temp[i]<<" ";
//     }
// }


// Optimal
void zeroEnd(vector<int> &a,int n){
    int j = -1;
    // Loop to find first zero
    for(int i = 0;i<n;i++){
        if(a[i] == 0){
            j = i;
            break;
        }
    }
    // If there is no zero -> return
    if(j == -1) return;
    // loop to swap zero with non-zero
    for(int i = j+1;i<n;i++){
        if(a[i] != 0){
            swap(a[i],a[j]);
            j++;
        }
    }
}
int main(){
    vector<int> arr = {1,2,0,5,0,0,3,7};
    int n = arr.size();
    zeroEnd(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}