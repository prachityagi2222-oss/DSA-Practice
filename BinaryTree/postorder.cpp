#include <bits/stdc++.h>
using namespace std;
/*in post order travesral first left, then right and then store the value of root
time complexity O(n)
space compleixty O(n)*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void postorder(TreeNode* root, vector<int>&result){
    if(!root) return;
    postorder(root->left, result);
    postorder(root->right, result);
    result.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode* root) {
    vector<int> result;
    postorder(root, result);
    return result;
}


int main(){
    return 0;
}
