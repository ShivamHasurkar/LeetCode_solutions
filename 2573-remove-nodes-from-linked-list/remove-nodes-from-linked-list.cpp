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
    ListNode* removeNodes(ListNode* head) {
        stack<int> s;
        while(head){
            s.push(head->val);
            head = head->next;
        }
        ListNode *newhead = new ListNode(s.top());
        s.pop();
        int max_val = newhead->val;
        while(!s.empty()){
            while(!s.empty() && max_val>s.top()){
                s.pop();
            }
            if(!s.empty() && max_val<=s.top()){
                ListNode* newNode = new ListNode(s.top());
                s.pop();
                max_val = newNode->val;
                newNode->next = newhead;
                newhead = newNode;
            }
        }
        return newhead;
    }
};