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
    ListNode* swapPairs(ListNode* head) {
        ListNode* first = nullptr;
        ListNode* second = nullptr;
        ListNode* ret = nullptr;
        ListNode* pre = new ListNode(0);

        if (!head)
            return head;
        if (!head->next)
            return head;

        first = head;
        second = head->next;
        ret = head->next;
        pre->next = first;
        while (first && second) {
            pre->next = second;
            first->next = second->next;
            second->next = first;

            pre = first;
            first = first->next;
            if (first)
                second = first->next;
            else
                return ret;
        }

        return ret;
    }
};