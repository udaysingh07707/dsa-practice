class Solution {
public:
    ListNode* rev(ListNode* head){
        if(head == nullptr|| head->next== nullptr) return head;
        ListNode* prev = nullptr;
        ListNode* cur = head;
        while(cur!=nullptr){
            ListNode* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left ==  right) return head;
        int n = 1;
        ListNode* a = nullptr;
        ListNode* b = nullptr;
        ListNode* c = nullptr;
        ListNode* d = nullptr;

        ListNode* temp = head;
        while(temp!=nullptr){
            if(n == left-1) a = temp;
            else if(n == left) b = temp;
            else if(n ==  right) c = temp;
            else if( n == right+1)  d = temp;
            n++;
            temp = temp->next;
        }
        if (a) a->next = nullptr;
        c->next = nullptr;
        c = rev(b);
        if (a) a->next = c;
        b->next = d;
        if(a) return head;
        else return c;
    }
};