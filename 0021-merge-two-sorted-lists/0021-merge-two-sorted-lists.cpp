
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* newnode = new ListNode(-1);
        ListNode* temp = newnode;
        while(a!=nullptr && b!=nullptr){
            if(a->val < b->val){
                temp->next = a;
                temp = temp->next;
                a = a->next;
            }else{
                temp->next = b;
                temp = temp->next;
                b = b->next;
            }
            
        }
        if(a == nullptr){
            temp->next = b;
        }else{
            temp->next = a;
        }
        return newnode->next;
        
        
    }
};