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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB == NULL) return NULL;
        ListNode *a = headA;
        ListNode *b = headB;
        int la = 0;
        int lb = 0; 
        int skip = 0;
        while(a){
            a = a->next;
            la++;
        }
        while(b){
            b = b->next;
            lb++;
        }
        a = headA;
        b = headB;
        if(la>lb){
           skip = la-lb;
           while(skip!=0){
            a = a->next;
            skip--;
           } 
        }else{
           skip = lb-la;
           while(skip!=0){
            b = b->next;
            skip--;
           } 
           
        }
        while(a&&b){
            if(a == b){
                return a;
            }
            a = a->next;
            b = b->next;
        }
        return NULL;
    }
};