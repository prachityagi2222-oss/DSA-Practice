#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


bool isSameTree(TreeNode* p, TreeNode* q) {
    //if both are null
    if (!p && !q){
        return true;
    }
    //if one ends, and other dose not
    if (!p || !q){
        return false;
    }
    //if values are differnt
    if(p->val != q->val){
        return false;
    }
    //check left and right subtrees
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main(){
    return 0;
}
