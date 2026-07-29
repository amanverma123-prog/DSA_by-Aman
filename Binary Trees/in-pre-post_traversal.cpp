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

void inOrder(TreeNode* root, vector<int>& in) {
    if (root == NULL) return;

    inOrder(root->left, in);
    in.push_back(root->data);
    inOrder(root->right, in);
}

void preOrder(TreeNode* root, vector<int>& pre) {
    if (root == NULL) return;

    pre.push_back(root->data);
    preOrder(root->left, pre);
    preOrder(root->right, pre);
}

void postOrder(TreeNode* root, vector<int>& post) {
    if (root == NULL) return;

    postOrder(root->left, post);
    postOrder(root->right, post);
    post.push_back(root->data);
}
 
// TC = O(n), SC = O(n)
vector<vector<int>> treeTraversal(TreeNode* root){
    vector<int> pre, in, post;

    preOrder(root, pre);
    inOrder(root, in);
    postOrder(root, post);

    return {pre, in, post};
}
int main(){
    // Construct the tree
        //
        //         1
        //       /   \
        //      2     3
        //     / \   / \
        //    4   5 6   7

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<vector<int>> traversal = treeTraversal(root);

    cout << "Preorder: ";
    for (int x : traversal[0])
        cout<<x<< " ";

    cout << "\nInorder: ";
    for (int x : traversal[1])
        cout<<x<< " ";

    cout<<"\nPostorder: ";
    for (int x : traversal[2])
        cout << x << " ";

    cout << endl;
    return 0;
}