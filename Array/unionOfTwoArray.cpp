// Brute force
// #include<iostream>
// #include<set>
// using namespace std;
// void union1(int a1[], int a2[], int n, int m){
//     set<int> s;
//     for(int i = 0;i<n;i++){
//         s.insert(a1[i]);
//     }
//     for(int i = 0;i<m;i++){
//         s.insert(a2[i]);
//     }
//     int newUnion[s.size()];
//     int i = 0;
//     for(auto x : s){
//         newUnion[i++] = x;
//     }
//     for(int i = 0;i<s.size();i++){
//         cout<<newUnion[i]<<" ";
//     }
// }
// int main(){
//     int n = 5,m = 6;
//     int arr1[n] = {1,1,2,3,4};
//     int arr2[m] = {2,3,4,4,5,6};
//     union1(arr1,arr2,n,m);
//     return 0;
// }

//  Optimal --> TC = O(n+m)  SC = 0(n+m)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> union1(vector<int> a1, vector<int> a2){
    int n = a1.size();
    int m = a2.size();
    int i = 0,j = 0;
    vector<int> uni;
    while(i<n && j<m){
        if(a1[i] <= a2[j]){
            if(uni.size() == 0 || uni.back() != a1[i]){
                uni.push_back(a1[i]);
            }
            i++;
        }
        else{
            if(uni.size() == 0 || uni.back() != a2[j]){
                uni.push_back(a2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(uni.size() == 0 || uni.back() != a1[i]){
            uni.push_back(a1[i]);
        }
        i++;
    }
    while(j<m){
        if(uni.size() == 0 || uni.back() != a2[j]){
                uni.push_back(a2[j]);
        }
        j++;
    }
    return uni;
}
int main(){
    vector<int> arr1 = {1,1,2,3,4,7};
    vector<int> arr2 = {2,3,4,4,5,6};
    vector<int> result = union1(arr1,arr2);
    for(auto x : result){
        cout<<x<<" ";
    }
    return 0;
}