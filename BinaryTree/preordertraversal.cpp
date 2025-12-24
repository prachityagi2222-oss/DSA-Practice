#include <bits/stdc++.h>
using namespace std;

/*Preorder means going like this root, then left subtree and then right subtree
time complexity O(n)
space complexity O(n)*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void preorder(TreeNode* node, vector<int>& result){
    if( !node) return;
    result.push_back(node->val); //printing value of result
    preorder(node->left, result); //going to left subtree
    preorder(node->right, result); //going to right subtree
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;
    preorder(root, result);
    return result;
}

int main(){
    return 0;
}
