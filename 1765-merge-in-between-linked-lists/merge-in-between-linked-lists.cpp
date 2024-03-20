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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *head = list1;
        int count = 0;
        while(count < a-1){
            head = head->next;
            ++count;
        }
        ListNode* deleteList = head->next;
        ++count;
        head->next = list2;
        while(head->next){
            head = head->next;
        }
        while(count < b){
            deleteList = deleteList->next;
            ++count;
        }
        head->next = deleteList->next;
        return list1;
    }
};