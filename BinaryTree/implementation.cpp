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


/*time complexity O(n)
space complexity O(n)*/
TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
    unordered_map<int, TreeNode*> nodes;
    unordered_set<int> children;

    //Build nodes and connect 
    for(auto &desc: descriptions){
        int parent = desc[0], child = desc[1], isLeft = desc[2];

        if(!nodes[parent]) nodes[parent] = new TreeNode(parent);
        if(!nodes[child]) nodes[child] = new TreeNode(child);

        if(isLeft) nodes[parent]->left = nodes[child];
        else nodes[parent]->right = nodes[child];

        children.insert(child);
    }

    //find root
    TreeNode* root = nullptr;
    for(auto &desc : descriptions){
        int parent = desc[0];
        if (children.find(parent) == children.end()){
            root = nodes[parent];
            break;
        }
    }
    return root;
    
}

int main(){
    return 0;
    
}
