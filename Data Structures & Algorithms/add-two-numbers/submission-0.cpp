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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *cur = head;

        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0) {
            int num1 = (l1 != nullptr) ? l1->val : 0;
            int num2 = (l2 != nullptr) ? l2->val : 0;

            int num = num1 + num2 + carry;
            carry = num / 10;
            num = num % 10;
            cur->next = new ListNode(num);

            cur = cur->next;
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }
        ListNode *res = head->next;
        delete head;
        return res;
    }
};
