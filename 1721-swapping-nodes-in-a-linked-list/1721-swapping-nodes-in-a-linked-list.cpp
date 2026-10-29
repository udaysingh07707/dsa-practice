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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next == nullptr) return head;
        ListNode dummy(-1);
        ListNode* temp = &dummy;
        temp->next = head;
        ListNode* slow = &dummy;
        ListNode* fast = head;

        for (int i = 0; i < k; i++) {
            if (fast == NULL) {
                break;
            }
            fast = fast->next;
        }
        while (fast) {
            slow = slow->next;
            fast = fast->next;
        }
        for (int i = 1; i < k; i++) {
            temp = temp->next;
        }

        ListNode* first = temp->next;
        ListNode* second = slow->next;

        if (first == second) {
            return head;
        }else if (first->next == second) {
            temp->next = second;
            first->next = second->next;
            second->next = first;
        }else if(second->next == first){
            slow->next = first;
            second->next = first->next;
            first->next = second;

        }else{

        ListNode* tn = first->next;
        ListNode* sn = second->next;

        temp->next = second;
        second->next = tn;

        slow->next = first;
        first->next = sn;
        }


        return dummy.next;
    }
};