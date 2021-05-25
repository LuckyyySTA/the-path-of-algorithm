#include<bits/stdc++.h>
using namespace std;

int main(){
    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    //solution 1： 先计算链表长度，再从head开始走
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        int cnt = 0;
        ListNode* p = head;
        while(p != NULL){
            p = p->next;
            cnt++;
        }
        while(head != NULL && cnt - k > 0){
            head = head->next;
            cnt--;
        }
        return head;
    }
};

    // solution 2: 双指针
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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* fast = head, *slow = head;
        // 先让快指针走k步
        while(k--){
            fast = fast->next;
        }
        while(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};
}