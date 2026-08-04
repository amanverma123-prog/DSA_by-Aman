#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Recuresive Approach --> TC = O(n), SC = O(n)
// void preorder(TreeNode* root, vector<int>& ans) {
//     if (root == NULL)
//         return;

//     ans.push_back(root->data);
//     preorder(root->left, ans);
//     preorder(root->right, ans);
// }
// vector<int> preorderTraversal(TreeNode* root) {
//     vector<int> ans;

//     preorder(root, ans);
//     return ans;
// }

// Iterative Approach --> TC = O(n), SC = O(n)
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    if(root == NULL) return ans;

    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        root = st.top();

        st.pop();
        ans.push_back(root->data);

        if (root->right != NULL)
            st.push(root->right);
        if (root->left != NULL)
            st.push(root->left);
    }
    return ans;
}
int main(){
    // Construct the tree
        //
        //         1
        //       /   \
        //      2     3
        //     / \     \
        //    4   5     8
        //       / \   /
        //      6   7 9
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    root->left->right->left = new TreeNode(6);
    root->left->right->right = new TreeNode(7);

    root->right->right = new TreeNode(8);
    root->right->right->left = new TreeNode(9);

    vector<int> preTraversal = preorderTraversal(root);

    for(int i : preTraversal){
        cout<<i<<" ";
    }
    return 0;
}