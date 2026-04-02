#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<unordered_set>
using namespace std;

// Better approach --> TC = O(nlogn), SC = O(1)
// int longestConsecutiveSequence(vector<int> a){
//     sort(a.begin(),a.end());
//     int count = 0;
//     int lastSmaller = INT_MIN;
//     int longest = 0;
//     int n = a.size();
//     for(int i = 0;i<n;i++){
//         if(a[i]-1 == lastSmaller){
//             count++;
//             lastSmaller = a[i];
//         } else if(a[i] != lastSmaller){
//             count = 1;
//             lastSmaller = a[i];
//         }
//         longest = max(longest, count);
//     }
//     return longest;
// }

// Optimal Appraoch --> TC = O(2n + n), SC = O(n)
int longestConsecutiveSequence(vector<int>& a){
    int n = a.size();
    if(n == 0) return 0;
    int longest = 0;
    unordered_set <int> st;
    for(int i = 0;i<n;i++){
        st.insert(a[i]);
    }
    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                count++;
                x += 1;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}

int main(){
    vector<int> arr = {100,102,100,101,101,4,3,2,3,2,1,1,1,2};
    cout<<"Longest sequence : "<<longestConsecutiveSequence(arr);
    return 0;
}