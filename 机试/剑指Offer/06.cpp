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
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> ans;
        while(head != NULL){
            ans.push_back(head->val);
            head = head->next;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
}