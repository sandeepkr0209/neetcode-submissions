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
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode *prev = NULL;
        ListNode* next = head;

        while (next != NULL) {
            ListNode* front = next->next;
            next->next = prev;
            prev = next;
            next = front;
        }
        return prev;
    }
};
