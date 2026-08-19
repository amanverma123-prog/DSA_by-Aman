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

// TC = O(n), SC = O(h)
void getPath(TreeNode* root, vector<vector<int>>& ans, vector<int>& path){
            if(root == NULL){
                return;
            }

            path.push_back(root->data);

            if(root->left == NULL && root->right == NULL)
                ans.push_back(path);

            else{
                getPath(root->left, ans, path);
                getPath(root->right, ans, path);
            }

            path.pop_back();
        }
		vector<vector<int>> allRootToLeaf(TreeNode* root) {
            vector<vector<int>> ans;
            if(root == NULL)
                return ans;
            vector<int> path;
            getPath(root, ans, path);
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

    vector<vector<int>> result = allRootToLeaf(root);
    for(auto i : result){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}