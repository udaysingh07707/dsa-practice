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
    ListNode*  reverselinkedlist(ListNode* head){
        if(head == nullptr || head->next  == nullptr) return head;
        ListNode* newnode = reverselinkedlist(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newnode;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* temp = reverselinkedlist(slow);
        while(temp){
            if(head->val!=temp->val){
                return false;
            }
            head = head->next;
            temp = temp->next;
        }
        return true;
    }
};