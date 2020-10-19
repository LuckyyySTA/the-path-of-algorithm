/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* cur = dummy, *node = dummy;
        int count = 0;
        while(cur){
            count++;
            cur = cur->next;
        }
        int num = count - n;
        while(--num){
            node = node->next;
        }
        node->next = node->next->next;
        return dummy->next;
    }
};