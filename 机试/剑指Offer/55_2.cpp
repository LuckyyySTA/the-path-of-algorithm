#include<bits/stdc++.h>
using namespace std;

int main(){
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
        if(!root->left && !root->right){
            return 1;
        }
        int left = depth(root->left);
        int right = depth(root->right);
        return max(left, right) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        int left = depth(root->left);
        int right = depth(root->right);
        if(abs(left - right) > 1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
    return 0;
}