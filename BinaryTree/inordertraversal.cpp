#include <bits/stdc++.h>
using namespace std;

/*in case of inorder traversal we first visit node however print the left one,
then we print the node, then go to the right one
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

void inorder(TreeNode* node, vector<int>& result){
    if(!node) return;
    inorder(node->left, result); //going to left node
    result.push_back(node->val); //storing the node value
    inorder(node->right, result); //going to its right node
}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    inorder(root, result);
    return result;
}

int main(){
    return 0;
}

