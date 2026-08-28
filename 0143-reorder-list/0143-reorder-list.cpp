
class Solution {
public:
    ListNode* rev(ListNode* head){
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* cur = head;
        ListNode* prev = nullptr;
        while(cur!=nullptr){
            ListNode* temp = cur->next;
            cur->next = prev;
            prev  =cur;
            cur = temp;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(head->next == nullptr) return;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* nextnode = slow->next;
        slow->next = nullptr;

        ListNode* newnode =  rev(nextnode);

        ListNode* temp = head;

        while(newnode!=nullptr){
            ListNode* newtemp = newnode;
            newnode  = newnode->next;
            newtemp->next = temp->next;
            temp->next = newtemp;
            temp = temp->next->next;
        }
    }
};