
class Solution {
public:
    ListNode* merge( ListNode* a, ListNode* b){
         ListNode* newnode = new  ListNode(0);
          ListNode* temp = newnode;
          while(a!=nullptr&& b!=nullptr){
          if(a->val<b->val){
            temp->next = a;
            temp = temp->next;
            a = a->next;
          }else{
            temp->next = b;
            temp = temp->next;
            b = b->next;
          }
          }
        if(a==nullptr){
            temp->next = b;
        }else{
            temp->next = a;
        }
        return newnode->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == nullptr||head->next==nullptr) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = nullptr;

        a = sortList(a);
        b = sortList(b);
        ListNode* c = merge(a,b);
        return c;
    }
};