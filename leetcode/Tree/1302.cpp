/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int depth(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        return max(depth(root->left), depth(root->right)) + 1;
    }
    int deepestLeavesSum(TreeNode* root) {
        if(!root->left && !root->right){
            return root->val;
        }
        if(depth(root->left) == depth(root->right)){
            return deepestLeavesSum(root->left) + deepestLeavesSum(root->right);
        }else if (depth(root->left) > depth(root->right)){
            return deepestLeavesSum(root->left);
        }else{
            return deepestLeavesSum(root->right);
        }
    }
};