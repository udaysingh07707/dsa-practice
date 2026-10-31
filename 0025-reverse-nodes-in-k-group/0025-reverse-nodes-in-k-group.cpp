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
    ListNode* reverseList( ListNode* head, ListNode* last){
            if(head->next == last) return head;
             ListNode* newhead = reverseList(head->next,last);
             head->next->next = head;
             head->next = last;
             return newhead;
    } 
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(-1);

         dummy->next = head;

        ListNode* prev = dummy;
        ListNode* temp = head;
        while(temp){
            int count = 1;
            while(count < k  && temp){
                temp = temp->next;
                count++;
            }
            if(temp == nullptr) break;

            ListNode* nxt = temp->next;
            ListNode* newhead = reverseList(prev->next,nxt);
            ListNode* oldhead = prev->next;
            prev->next = newhead;
            prev = oldhead;
            temp = nxt;
        }
        return dummy->next;
    }
};