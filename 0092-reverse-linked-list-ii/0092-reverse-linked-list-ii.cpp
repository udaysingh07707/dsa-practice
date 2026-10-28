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
    ListNode* reverselist(ListNode* l,ListNode* r){
        ListNode* prev  = NULL;
        ListNode* head = l;
        while(head!=r){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next == NULL ) return head;
        ListNode* l = head;;
        ListNode* lp = nullptr;
        ListNode* r = nullptr;
        ListNode* rn = head;
        while(left > 1){
            lp = l;
            l = l->next;
            left--;
        }
        while(right > 0){
            r = rn;
            rn = rn->next;
            right--;
        }
        ListNode* node = reverselist(l,rn);
        if(lp == NULL) head = node;
        else lp->next = node;
        l->next = rn;

         return head;
    }
};