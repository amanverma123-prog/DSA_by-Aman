#include<iostream>
#include<vector>
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
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> res;
    if (root == NULL)
        return res;

    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int sz = q.size();
        vector<int> row(sz);

        for (int i = 0; i < sz; i++) {
            TreeNode* node = q.front();
            q.pop();

            int idx = (leftToRight) ? i : (sz - i - 1);
            row[idx] = node->data;

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        leftToRight = !leftToRight;
        res.push_back(row);
    }
    return res;
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

    vector<vector<int>> levelOrderTraversal = zigzagLevelOrder(root);

    for (const auto &level : levelOrderTraversal) {
    for (int node : level) {
        cout << node << " ";
    }
    cout << endl;
}
    return 0;
}