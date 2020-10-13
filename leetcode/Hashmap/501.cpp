
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
    unordered_map<int,int> mp;
    void DFS(TreeNode* root){
        if(root==NULL){
            return;
        }else{
            mp[root->val]++;
        }
        if(root->left != NULL){
            DFS(root->left);
        }
        if(root->right != NULL){
            DFS(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        DFS(root);
        vector<int> res;
        int max = INT_MIN;
        unordered_map<int,int>::iterator it = mp.begin();
        for(; it != mp.end(); it++){
            if(it->second > max){
                max = it->second;
                res.clear();
                res.push_back(it->first);
            }
            else if(it->second == max){
                res.push_back(it->first);
            }
        }
        return res;
    }
};