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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = &dummy; 
        while(curr){
            int sum = 0;
            ListNode* temp = curr->next;
            while(temp){
                sum += temp->val;
                if(sum == 0){
                    curr->next = temp->next;
                    break;
                }
                temp = temp->next;
            }
            if (!temp) curr = curr->next;
        }
        return dummy.next;
    }
};