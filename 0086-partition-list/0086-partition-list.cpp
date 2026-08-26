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
    ListNode* partition(ListNode* head, int x) {
        if(head== nullptr || head->next == nullptr) return head;
       ListNode* s = new ListNode(-1);
       ListNode* l = new ListNode(-2);
       ListNode* s1 = s;
       ListNode* l2 = l;

       ListNode* temp = head;
       while(temp!=nullptr){
        if(temp->val<x){
            s->next= temp;
            s = s->next;
        }else{
            l->next = temp;
            l  = l->next;

        }
        temp = temp->next;
       }
       s->next = l2->next;
       l->next = nullptr;
       return s1->next;



        
    }
};