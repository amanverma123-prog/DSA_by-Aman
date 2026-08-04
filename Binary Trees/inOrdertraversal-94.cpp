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

// Recursive Apporach --> TC = O(n), SC = O(n)
// void inorder(TreeNode* root, vector<int>& ans) {
//         if (root == NULL)
//             return;

//         inOrder(root->left, ans);
//         ans.push_back(root->data);
//         inOrder(root->right, ans);
//     }
// vector<int> inOrderTraversal(TreeNode* root) {
//     vector<int> ans;
//     inOrder(root, ans);
//     return ans;
// }

// Iterative Approach --> TC = O(n), SC = O(n)
vector<int> inorderTraversal(TreeNode* root) {
    stack<TreeNode*> st;
    TreeNode* node = root;
    vector<int> ans;

    while (true) {
        if (node != NULL) {
            st.push(node);
            node = node->left;
        } else {
            if (st.empty())
                break;
            node = st.top();
            st.pop();
            ans.push_back(node->data);
            node = node->right;
        }
    }
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

    vector<int> preTraversal = inorderTraversal(root);

    for(int i : preTraversal){
        cout<<i<<" ";
    }
    return 0;
}