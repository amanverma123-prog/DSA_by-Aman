#include<iostream>
#include<queue>
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
void allPaths(TreeNode* root, vector<string>& ans, string path) {
    if (root->left == NULL && root->right == NULL) {
        ans.push_back(path);
        return;
    }
    if (root->left) {
        allPaths(root->left, ans, path + "->" + to_string(root->left->data));
    }
    if (root->right) {
        allPaths(root->right, ans,
                 path + "->" + to_string(root->right->data));
    }
}
vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    string path = to_string(root->data);
    allPaths(root, ans, path);
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

    vector<string> res = binaryTreePaths(root);
    for(auto x : res){
        cout<<x<<endl;
    }
    return 0;
}