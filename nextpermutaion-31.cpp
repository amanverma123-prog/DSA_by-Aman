#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> nextPermutation(vector<int>& a){
    // Break - Point
    int n = a.size();
    int idx = -1;
    for(int i = n-2;i>=0;i--){
        if(a[i] < a[i+1]){
            idx = i;
            break;
        }
    }
    if(idx == -1){
        reverse(a.begin(), a.end()); // no next permutaion exists
        return a;
    }
    // Find slighter greater than idx (breakpoint)
    for(int i = n-1;i>idx;i--){
        if(a[i] > a[idx]){
            swap(a[i], a[idx]);
            break;
        }
    }
    // sort the array after breakpoint
    reverse(a.begin() + idx+1,a.end());
    return a;
}
int main(){
    vector <int> arr = {2,1,5,4,3,0,0};
    vector<int> result = nextPermutation(arr);
    for(int x : result){
        cout<<x<<" ";
    }
    return 0;
}