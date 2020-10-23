/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> res;
        while(head!=NULL){
            res.push_back(head->val);
            head = head->next;
        }
        if(res.size() == 0){
            return true;
        }
        for(int i = 0, j = res.size() - 1; i <= j; i++, j--){
            if(res[i] == res[j]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};