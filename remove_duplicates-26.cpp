// Brute force
// #include<iostream>
// #include<set>
// using namespace std;
// int remDuplicates(int arr[],int n){
//     set<int> s;
//     for(int i = 0;i<n;i++){  // nlogn
//         s.insert(arr[i]);
//     }
//     int idx = 0;
//     for(auto v : s){  // n
//         arr[idx] = v;
//         idx++;
//     }
//     return idx;
// }
// int main(){
//     int n = 6;
//     int arr[n] = {1,1,2,2,3,3};
//     cout<<remDuplicates(arr,n);
//     return 0;
// }


// Optimal -> my own approach (two pointer's)
// #include<iostream>
// using namespace std;
// int remDuplicate(int a[], int n){
//     int idx = 1;
//     int l = 0;
//     int r = 1;
//     for(int i = 0;i<n-1;i++){
//         if(a[l] == a[r]){
//             r++;
//         } else{
//             a[idx++] = a[r];
//             l = r;
//             r++;
//         }
//     }
//     for(int i = 0;i<idx;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     return idx;
// }
// int main(){
//     int n = 6;
//     int arr[n] = {1,1,2,2,3,3};
//     cout<<remDuplicate(arr,n);
//     return 0;
// }

// Optimal -> (2-pointer)   TC = O(N), SC = O(1)
#include<iostream>
using namespace std;
int remDuplicate(int a[],int n){
    int i = 0;
    for(int j = 1;j<n;j++){
        if(a[i] != a[j]){
            a[i+1] = a[j];
            i++;
        }            
    }
    return (i+1);
}
int main(){
    int n = 6;
    int arr[n] = {1,1,2,2,3,3};
    cout<<remDuplicate(arr,n);
    return 0;
}