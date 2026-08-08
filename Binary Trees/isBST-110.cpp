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

// TC = O(n), SC = O(n)
// int maxDepth(TreeNode* root) {
//     if (root == NULL)
//         return 0;

//     int lh = maxDepth(root->left);
//     int rh = maxDepth(root->right);

//     return 1 + max(lh, rh);
// }

// // Brtute Force --> TC = O(n^2), SC = O(h)
// bool isBalanced(TreeNode* root) {
//     if(root == NULL) return true;

//     int lh = maxDepth(root->left);
//     int rh = maxDepth(root->right);

//     if(abs(rh - lh) > 1) return false;

//     bool leftNode = isBalanced(root->left);
//     bool righttNode = isBalanced(root->right);

//     if(!leftNode || !righttNode) return false;

//     return true;
// }

// Optimal --> TC = O(n), SC = O(h)
int maxDepth(TreeNode* root) {
    if (root == NULL)
        return 0;

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    if(lh == -1 || rh == -1) return -1;

    if(abs(lh - rh) > 1) return -1;

    return 1 + max(lh, rh);
}
bool isBalanced(TreeNode* root) {
    return (maxDepth(root) != -1);
}
int main(){
    // Construct the tree
        //
        //         3
        //       /   \
        //      9     20
        //           /  \
        //          15   7
        //    
    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    // root->left->left = new TreeNode(4);
    // root->left->right = new TreeNode(5);
    
    // root->left->right->left = new TreeNode(6);
    // root->left->right->right = new TreeNode(7);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    cout<<isBalanced(root);
    return 0;
}