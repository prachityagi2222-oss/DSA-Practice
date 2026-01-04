/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    /*time O(n)
    space O(log n)*/
    int best = 0;
    int dfs(TreeNode* node){
            if (!node) return 0;
            int lh = dfs(node -> left);
            int rh = dfs(node->right);
            best = max(best, lh+rh);
            return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return best;
        }

};