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

int dfs(TreeNode* root) {
    if (root == NULL)
        return 0;

    int sum = 0;
    if (root->data % 2 == 0) {
        if (root->left != NULL) {
            if (root->left->left != NULL)
                sum += root->left->left->data;
            if (root->left->right != NULL)
                sum += root->left->right->data;
        }
        if (root->right != NULL) {
            if (root->right->left != NULL)
                sum += root->right->left->data;
            if (root->right->right != NULL)
                sum += root->right->right->data;
        }
    }
    sum += dfs(root->left);
    sum += dfs(root->right);
    return sum;
}
int sumEvenGrandparent(TreeNode* root) {
    return dfs(root); 
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

    cout<<sumEvenGrandparent(root);

    
    return 0;
}