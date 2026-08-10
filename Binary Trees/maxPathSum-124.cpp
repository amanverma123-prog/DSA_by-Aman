#include<iostream>
#include<vector>
#include<climits>
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
int maxSum(TreeNode* root, int& maxi) {
    if (root == NULL)
        return 0;

    int lh = max(0, maxSum(root->left, maxi));
    int rh = max(0, maxSum(root->right, maxi));

    maxi = max(maxi, (lh + rh + root->data));

    return root->data + max(lh, rh);
}
int maxPathSum(TreeNode* root) {
    int maxi = INT_MIN;
    maxSum(root, maxi);
    return maxi;
}
int main(){
    // Construct the tree
        //
        //        -10
        //       /   \
        //      9     20
        //           /  \
        //          15   7
        //    
    TreeNode* root = new TreeNode(-10);

    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    // root->left->left = new TreeNode(4);
    // root->left->right = new TreeNode(5);
    
    // root->left->right->left = new TreeNode(6);
    // root->left->right->right = new TreeNode(7);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    cout<<maxPathSum(root);
    return 0;
}