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
    ListNode* merge(ListNode* a,ListNode* b){
        ListNode dummy(-1);
        ListNode* temp = &dummy;
       

        while(a && b){
            if(a->val < b->val){
            temp->next = a;
            a = a->next;
            } 
            else{
            temp->next = b;
            b = b->next;
            } 
            temp = temp->next;
            
        }
        if(a == NULL){
            temp->next = b;
        }else{
            temp->next = a;
        }
        return dummy.next;
    }
    ListNode* mergesort(int s , int e ,vector<ListNode*>& lists){
       if(s > e) return NULL ;
        if(s == e) return lists[s];
        int mid = s +  (e-s)/2;

        ListNode* a = mergesort(s,mid,lists);
        ListNode* b = mergesort(mid+1,e,lists);
        
        return merge(a,b);

       
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        return mergesort(0,n-1,lists);
    }
};