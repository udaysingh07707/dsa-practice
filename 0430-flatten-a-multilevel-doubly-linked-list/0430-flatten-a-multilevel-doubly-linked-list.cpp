/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp = head;
        while(temp){
            Node* a = temp->next;
            if(temp->child){
                Node* c = temp->child;
                temp->child = nullptr;
                c = flatten(c);
                temp->next = c;
                c->prev = temp;
                while(c->next){
                    c = c->next;
                }
                c->next = a;
                if(a) a->prev = c;
            }
            temp = temp->next;
        }
        return head;
    }
};