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
        ListNode* cur = head;
        ListNode* post = nullptr;
        ListNode* pre = nullptr;

        while(cur) {
            post = cur->next;
            cur->next = pre;
            pre = cur;
            cur = post;
        }

        return cur;
    }
};

ListNode* reverseList_res(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *ret = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
         return ret;
    }