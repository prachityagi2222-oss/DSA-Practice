#include <bits/stdc++.h>
using namespace std;

/* time complexity O(n)
space complexity O(n)*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


bool isMirror(TreeNode* t1, TreeNode* t2) {
    //if both values are null, then true
    if (!t1 && !t2) return true;

    //if only one of the value is not null, then false
    if (!t1 || !t2) return false;
    
    //if the values mismatch
    if (t1->val != t2->val) return false;

    return isMirror(t1->left, t2->right) &&
            isMirror(t1->right, t2->left);
}
bool isSymmetric(TreeNode* root) {
    if (!root) return true;
    return isMirror(root->left, root->right);
}

int main(){
    return 0;
}