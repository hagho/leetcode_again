/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* head = res;
        int jinwei = 0;
        while (l1 != NULL && l2 != NULL) {
            int tmp = (l1->val + l2->val + jinwei) % 10;
            head->next = new ListNode(tmp);
            jinwei = (l1->val + l2->val + jinwei) / 10;
            head = head->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != NULL) {
            head->next = new ListNode((l1->val + jinwei) % 10);
            jinwei = (l1->val + jinwei) / 10;
            head = head->next;
            l1 = l1->next;
        }
        while (l2 != NULL) {
            head->next = new ListNode((l2->val + jinwei) % 10);
            jinwei = (l2->val + jinwei) / 10;
            head = head->next;
            l2 = l2->next;
        }
        if (jinwei != 0) {
            head->next = new ListNode(jinwei);
        }
        return res->next;
    }
};