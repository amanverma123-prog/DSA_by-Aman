#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// TC = O(n), SC = O(h)
bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == NULL || q == NULL)
        return p == q;

    return (p->data == q->data) &&
           isSameTree(p->left, q->left) &&
           isSameTree(p->right, q->right);
}

int main() {

    // Tree 1
    //
    //        -10
    //       /   \
    //      9     20
    //           /  \
    //          15   7

    TreeNode* root1 = new TreeNode(-10);

    root1->left = new TreeNode(9);
    root1->right = new TreeNode(20);
    root1->right->left = new TreeNode(15);
    root1->right->right = new TreeNode(7);


    // Tree 2
    //
    //        -10
    //       /   \
    //      9     20
    //           /  \
    //          15   7

    TreeNode* root2 = new TreeNode(-10);

    root2->left = new TreeNode(9);
    root2->right = new TreeNode(20);
    root2->right->left = new TreeNode(15);
    root2->right->right = new TreeNode(7);


    cout<<isSameTree(root1, root2);

    return 0;
}