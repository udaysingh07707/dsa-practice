
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()<1){
            return NULL;
        }
        while(lists.size()>1){
            ListNode* a = lists[lists.size()-1];
            lists.pop_back();
            ListNode* b = lists[lists.size()-1];
            lists.pop_back(); 
            ListNode* c = merge(a,b);
            lists.push_back(c);

        }
        return lists[0];
    }
};