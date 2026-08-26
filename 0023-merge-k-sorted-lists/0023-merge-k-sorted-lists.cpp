
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
        int  n = lists.size();
        while(n>1){
            int j = 0;
           for(int i = 0;i<n;i += 2){
            if(i+1<n) lists[j++] = merge(lists[i],lists[i+1]);
            else lists[j++] = lists[i];
           }
           n = j;

        }
        return lists[0];
    }
};