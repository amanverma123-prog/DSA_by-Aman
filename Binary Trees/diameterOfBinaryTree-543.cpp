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

// Brute Force --> TC = O(n^2), SC = O(1)
// int maxi = 0;
// int maxDepth(TreeNode* root) {
//     if (root == NULL)
//         return 0;
//     int lh = maxDepth(root->left);
//     int rh = maxDepth(root->right);

//     return 1 + max(lh, rh);
// }
// void findMax(TreeNode* root) {
//     if (root == NULL)
//         return;

//     int lh = maxDepth(root->left);
//     int rh = maxDepth(root->right);

//     maxi = max(maxi, lh + rh);

//     findMax(root->left);
//     findMax(root->right);
// }
// int diameterOfBinaryTree(TreeNode* root) {
//     findMax(root);
//     return maxi;
// }

int findMax(TreeNode* root, int maxi){
    if(root == NULL) return 0;

    int lh = findMax(root->left, maxi);
    int rh = findMax(root->right, maxi);

    maxi = max(maxi, (lh+rh));

    return 1 + max(lh,rh);
}
int diameterOfBinaryTree(TreeNode* root) {
    int maxi = 0; 
    return findMax(root, maxi);
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

    cout<<diameterOfBinaryTree(root);
    return 0;
}