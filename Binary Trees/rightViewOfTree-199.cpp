#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

// TC = O(n), SC = O(h)
void recursion(TreeNode* root, vector<int>& ans, int level) {
    if (root == NULL)
        return;

    if (level == ans.size())
        ans.push_back(root->data);
    recursion(root->right, ans, level + 1);
    recursion(root->left, ans, level + 1);
}
vector<int> rightSideView(TreeNode* root) {
    vector<int> ans;
    recursion(root, ans, 0);
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

    vector<int> result = rightSideView(root);
    for(int i : result)
        cout<<i<<" ";
    
    return 0;
}