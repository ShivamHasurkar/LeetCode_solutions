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
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        unordered_map<int, ListNode*> prefixMap;
        int sum = 0;
        for(ListNode* node = dummy; node; node = node->next){
            sum += node->val;
            prefixMap[sum] = node;
        }
        sum = 0;
        for(ListNode* node = dummy; node; node = node->next){
            sum += node->val;
            node->next = prefixMap[sum]->next;
        }
        return dummy->next;
    }
};