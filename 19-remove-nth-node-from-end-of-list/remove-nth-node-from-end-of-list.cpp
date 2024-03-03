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
        ListNode dummy(0);
        dummy.next = head;
        ListNode *first = &dummy, *second = &dummy;
        while(n--){
            second = second->next;
        }

        while(second->next){
            second = second->next;
            first = first->next;
        }

        ListNode* temp = first->next;
        first->next = first->next->next;
        delete temp;
        return dummy.next;
    }
};