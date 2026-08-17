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
bool helper(TreeNode* leftN, TreeNode* rightN) {
    if (leftN == NULL || rightN == NULL)
        return leftN == rightN;

    if (leftN->data != rightN->data)
        return false;

    return helper(leftN->left, rightN->right) &&
            helper(leftN->right, rightN->left);
}
bool isSymmetric(TreeNode* root) { 
    return helper(root->left, root->right); 
}
int main(){
    // Construct the tree
        //
        //         1
        //       /   \
        //      2     2
        //     / \   / \
        //    3   4 4   3
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    cout<<isSymmetric(root);
    
    return 0;
}