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

void postorder(TreeNode* root, vector<int>& ans) {
    if (root == NULL)
        return;

        postorder(root->left, ans);
        postorder(root->right, ans);
        ans.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> ans;

    postorder(root, ans);
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

    vector<int> preTraversal = postorderTraversal(root);

    for(int i : preTraversal){
        cout<<i<<" ";
    }
    return 0;
}