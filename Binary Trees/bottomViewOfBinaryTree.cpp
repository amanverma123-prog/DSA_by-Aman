#include<iostream>
#include<vector>
#include<queue>
#include<map>
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
vector<int> topView(TreeNode *root){
    vector<int> ans;
    if(root == NULL) return ans;

    map<int, int> mp;
    queue<pair<TreeNode*, int>> q;

    q.push({root, 0});

    while(!q.empty()){
        auto it = q.front();
        q.pop();

        TreeNode* node = it.first;
        int line = it.second;

        mp[line] = node->data;
        
        if(node->left != NULL) 
            q.push({node->left, line-1});
        if(node->right != NULL)
            q.push({node->right, line+1});        
    }
    for(auto i : mp){
        ans.push_back(i.second);
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

    vector<int> result = topView(root);
    for(int i : result)
        cout<<i<<" ";
    
    return 0;
}