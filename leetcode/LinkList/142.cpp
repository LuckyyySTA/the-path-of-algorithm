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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        int flag = 0;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            return NULL;
        }
        while(head!=slow){
            head = head->next;
            slow = slow->next;
        }
        return head;
    }
};