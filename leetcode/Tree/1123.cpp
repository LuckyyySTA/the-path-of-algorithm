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
    int depth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return max(depth(root->left), depth(root->right)) + 1;
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        if(!root->left && !root->right){
            return root;
        }
        int left = depth(root->left);
        int right = depth(root->right);
        if(left < right){
            return lcaDeepestLeaves(root->right);
        }else if(left > right){
            return lcaDeepestLeaves(root->left);
        }else{
            return root;
        }
    }
};