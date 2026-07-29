#include<iostream>
#include<vector>
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

void inOrder(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;

        inOrder(root->left, ans);
        ans.push_back(root->data);
        inOrder(root->right, ans);
    }
    vector<int> inOrderTraversal(TreeNode* root) {
        vector<int> ans;
        inOrder(root, ans);

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

    vector<int> preTraversal = inOrderTraversal(root);

    for(int i : preTraversal){
        cout<<i<<" ";
    }
    return 0;
}