
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      if(head ==  nullptr || head->next == nullptr) return head;
      ListNode* prev = nullptr;
      ListNode* cur = head;
      while(cur!=nullptr){
        ListNode* aga = cur->next;
        cur->next = prev;
        prev = cur;
        cur = aga;
      }
      return prev;
    }
};