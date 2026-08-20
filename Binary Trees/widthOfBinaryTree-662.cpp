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
int widthOfBinaryTree(TreeNode* root) {
    if (!root)
        return 0;

    long long ans = 0;
    queue<pair<TreeNode*, long long>> q;
    q.push({root, 0});
    while (!q.empty()) {
        int size = q.size();
        long long mini = q.front().second;
        long long fst, last;
        for (int i = 0; i < size; i++) {
            int currIdx = q.front().second - mini;
            TreeNode* node = q.front().first;
            q.pop();
            if (i == 0)
                fst = currIdx;
            if (i == size - 1)
                last = currIdx;
            if (node->left)
                q.push({node->left, currIdx * 2LL + 1});
            if (node->right)
                q.push({node->right, currIdx * 2LL + 2});
        }
        ans = max(ans, last - fst + 1);
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

    cout<<widthOfBinaryTree(root);

    return 0;
}