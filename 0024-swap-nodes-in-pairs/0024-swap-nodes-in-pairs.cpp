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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* a = head;
        ListNode* b = head->next;
        ListNode dummy(-1);
        ListNode* temp = &dummy;
        temp->next == head;
        while(a!=nullptr && a->next!=NULL){
            a->next = b->next;
            b->next = a;
           temp->next = b;
           temp = temp->next->next;
            a = a->next;
            if(a!=nullptr && a->next!=nullptr) b = a->next;
        }
        return dummy.next;
    }
};