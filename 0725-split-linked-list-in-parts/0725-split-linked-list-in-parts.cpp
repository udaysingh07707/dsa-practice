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
        vector<ListNode*> v(k, NULL);
        if (head == NULL)
            return v;
        int len = 0;
        ListNode* temp = head;
        while (temp) {
            len++;
            temp = temp->next;
        }
        int grp = len / k;
        int e = len % k;
        temp = head;
        int count = 1;
        bool flag = true;
        int i = 0;
        while (temp) {
            if (i < e && count >= grp + 1) {
               ListNode* nxt = temp->next;
                temp->next = nullptr;
                v[i] = head;
                temp = nxt;
                head = temp;
                count = 1;
                i++;
                flag = true;
            } else if (i >= e && count >= grp) {
                 ListNode* nxt = temp->next;
                temp->next = nullptr;
                v[i] = head;
                temp = nxt;
                head = temp;
                count = 1;
                i++;
                flag = true;
            } else {
                temp = temp->next;
                count++;
            }
        }
        return v;
    }
};