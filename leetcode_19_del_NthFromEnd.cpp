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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* pre = dummy;
        ListNode* post = head;

        while(n > 0) {
            post = post->next;
            n--;
        }

        while(post) {
            post = post->next;
            pre = pre->next;
        }

        pre->next = pre->next->next;

        return dummy->next;
        
    }
};