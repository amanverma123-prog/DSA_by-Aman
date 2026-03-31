#include<iostream>
#include<set>
using namespace std;
bool duplicates(int a[], int n){
    set<int> s;
    for(int i = 0;i<n;i++){
        s.insert(a[i]);
    }
    if(s.size() == n){
        return false;
    }
    return true;
}
int main(){
    int n = 4;
    int arr[n] = {1,2,3,1};
    cout<<duplicates(arr,n);
    return 0;
}