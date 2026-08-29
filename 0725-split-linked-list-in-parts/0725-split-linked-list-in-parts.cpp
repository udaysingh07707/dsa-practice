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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> v(k,nullptr);
        int n = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            n++;
        }
        int r = n%k;
        int p = n/k;

        temp = head;
        int i = 0;
        while(temp){
          int size = p;
          if(r>0){
            size++;
            r--;
          }
            v[i++] = temp;
          for(int i = 1;i<size;i++){
            temp = temp->next;
          }
          ListNode* store = temp;
            temp = temp->next;
            store->next = nullptr;
        }
        return v;



    }
};