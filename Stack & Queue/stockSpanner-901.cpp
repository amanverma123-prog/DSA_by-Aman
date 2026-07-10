#include<iostream>
#include<vector>
#include<stack>
using namespace std;
// TC = O(n), SC = O(1)
vector<int> StockSpanner(vector<int> price){
    vector<int> ans(price.size(), 0);
    stack<int> st;

    for(int i = 0;i<price.size();i++){
        while(!st.empty() && price[st.top()] <= price[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = i+1;
        } else{
            ans[i] = i - st.top();
        }
        st.push(i);
    }
    return ans;
}

int main(){
    vector<int> price = {100,80,60,70,60,75,85};
    vector<int> res = StockSpanner(price);
    for(int i : res){
        cout<<i<<" ";
    }
    return 0;
}