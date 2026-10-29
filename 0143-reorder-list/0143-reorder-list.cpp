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
    ListNode* rev(ListNode* head) {
        if (head==NULL || head->next == NULL)
            return head;
        ListNode* newhead = rev(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newhead;
    }
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newnode =  rev(slow->next);
        slow->next = NULL;

        ListNode* temp = head;

        while(newnode!=nullptr){
             ListNode* ntemp = temp->next;
              ListNode* nnew = newnode->next;

              temp->next = newnode;
              newnode->next = ntemp;
              
             temp = ntemp;
             newnode = nnew;
        }
    }
};