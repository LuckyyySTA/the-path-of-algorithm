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
    int dfs(TreeNode* root, int sum){
        if(root==NULL){
            return 0;
        }
        if(!root->left && !root->right){
            return 2*sum + root->val;
        }
        int left = dfs(root->left, 2*sum + root->val);
        int right = dfs(root->right, 2*sum + root->val);
        return left + right;
    }
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root,0);
    }
};