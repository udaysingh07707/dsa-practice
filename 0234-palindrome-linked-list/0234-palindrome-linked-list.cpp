
class Solution {
public:
    ListNode* rev(ListNode* head){
        if(head == nullptr || head->next == nullptr) return head;

        ListNode* newhead = rev(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newhead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondhalf = nullptr;
        if(fast!=nullptr){
            secondhalf = slow->next;
        }else{
            secondhalf = slow;
        }
        ListNode* newhead = rev(secondhalf);
        ListNode* first = head;
        ListNode* second = newhead;
        while(second!=nullptr){
            if(first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }
        return true;


    }

};