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
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode dummy(-1);
        ListNode* newnode = &dummy;
        while (a && b) {
            if (a->val <= b->val) {
                newnode->next = a;
                a = a->next;
                newnode = newnode->next;
            } else {
                newnode->next = b;
                b = b->next;
                newnode = newnode->next;
            }
        }
        if (a == NULL) {
            newnode->next = b;
        } else {
            newnode->next = a;
        }
        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = nullptr;
        ListNode* l1 = sortList(a);
        ListNode* l2 = sortList(b);

        return merge(l1, l2);
    }
};