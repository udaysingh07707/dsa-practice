

class Solution {
public:
    Node* copyRandomList(Node* head) {
       //step 1 creating the deep copy
       Node* dumy = new Node(-1);
       Node* tail = dumy;
       Node* temp = head;
       while(temp){
        Node* newnode = new Node(temp->val);
        tail->next = newnode;
        tail = tail->next;
        temp = temp->next;
       }
       Node* dub = dumy->next;
       //step 2 alternate connection
       Node* a = head;
       Node* b = dub;
       Node* td = new Node(0);
       while(a && b){
        td->next = a;
        a = a->next;
        td = td->next;
        td->next = b;
        b = b->next;
        td = td->next;
       }
       //assing the random pointer
        Node* t1 = head;
        while(t1) {
          if(t1->random)
           t1->next->random = t1->random->next;
           t1 = t1->next->next;
        }
       //?making the right connection
       Node* dummy1 = new Node(0);
       Node* dummy2 = new Node(0);
       Node* to = dummy1;
       Node* ti = dummy2;
       Node* t = head;
       while(t){
        to->next = t;
        to = to->next;
        t = t->next;
        ti->next = t;
        ti = ti->next;
        t = t->next;
       }
       to->next = nullptr;
       ti->next = nullptr;
       return dummy2->next;
    }
};