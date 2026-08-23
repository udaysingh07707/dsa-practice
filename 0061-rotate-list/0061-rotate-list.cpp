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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr)  return NULL;
        if(k==0) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        int l = 1;

        while(fast->next!=nullptr){
         l++;
         fast = fast->next;
        } 
        fast = head;
        k = k%l;

        for(int i = 0;i<k;i++){
            fast = fast->next;
        }
        while(fast->next!=nullptr){
            fast = fast->next;
            slow = slow->next;
        }
            fast->next = head;
            head = slow->next;
            slow->next = nullptr;
            return head;
    }
};