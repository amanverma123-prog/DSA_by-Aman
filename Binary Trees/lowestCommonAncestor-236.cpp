#include<iostream>
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
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == NULL || root == p || root == q)
        return root;

    TreeNode* leftN = lowestCommonAncestor(root->left, p, q);
    TreeNode* rightN = lowestCommonAncestor(root->right, p, q);

    if (leftN == NULL)
        return rightN;
    else if (rightN == NULL)
        return leftN;
    else
        return root;
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

    TreeNode* p = root->left->left;
    TreeNode* q = root->left->right->right;

    TreeNode* ans = lowestCommonAncestor(root, p, q);
    cout<<ans->data;

    return 0;
}