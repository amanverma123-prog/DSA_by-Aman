// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     // Largest element 
//     // 1) Brute force
//     int arr[] = {3,2,1,5,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     sort(arr, arr + n);
//     cout<<"Largest : "<<arr[n-1];
//     return 0;
// }

// 2) Optimal
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {3,2,1,5,2};
    int largest = vec[0];
    for(int i = 1;i<vec.size();i++){
        if(vec[i]>largest){
            largest = vec[i];
        }
    }
    cout<<largest;
    return 0;
}