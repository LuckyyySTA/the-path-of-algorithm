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
    TreeNode* increasingBST(TreeNode* root) {
        stack<TreeNode*> st;
        if(root ==  NULL){
            return NULL;
        }
        TreeNode* head = new TreeNode(0);
        TreeNode* phead = head;
        TreeNode* p = root;
        while(p!=NULL || !st.empty()){
            if(p!=NULL){
                st.push(p);
                p = p->left;
            }
            else{
                p = st.top();
                st.pop();
                phead->right = new TreeNode(p->val);
                phead = phead->right;
                p = p->right;
            }
        }
        return head->right;
    }
};