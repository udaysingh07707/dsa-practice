
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first = -1;
        int prev = -1;
        int maxdis = 0 ;
        int mindis = INT_MAX;

        if(head->next->next == nullptr) return {-1,-1};
        
        ListNode* p = head;
        ListNode* c = head->next;
        ListNode* n = c->next;
        int i = 0;
        while(n){
            int cur = -1;
            if(c->val > p->val && c->val > n->val ){
                if(first == -1) first = i;
                 else cur = i; 
            }else if(c->val < p->val && c->val < n->val){
                 if(first == -1) first = i;
                 else cur = i;  
            }
            if(first!= -1 && cur!=-1){
                maxdis = max(maxdis,cur-first);
                mindis = min(mindis,cur-first);
            }
            if(cur!=-1 && prev!=-1){
                mindis = min(mindis,cur-prev);
            }
            if(cur!=-1) prev = cur;
            p = p->next;
            c = c->next;
            n = n->next;
            i++;
        }
        if(first==-1 || prev == -1) return {-1,-1};
        return {mindis,maxdis};

        
    }
};