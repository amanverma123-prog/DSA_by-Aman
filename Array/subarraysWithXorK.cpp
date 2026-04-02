#include<iostream>
#include<vector>
using namespace std;

// Brute force
int subarraysWithXorK(vector<int> a, int n, int t){
    int count = 0;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int x = 0;
            for(int k = i;k<=j;k++){
                x = x ^ a[k];
            }
            if(x == t) count++;
        }
    }
    return count;
}
int main(){
    int n = 5;
    int t = 6;
    vector<int> arr = {4,2,2,6,4};
    cout<<subarraysWithXorK(arr,n,t);
    return 0;
}