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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1);
        ListNode* pre = head;
        ListNode* p = l1;
        ListNode* q = l2;
        
        while(p && q)
        {
            if(p->val <= q->val)
            {
                pre->next = p;
                p = p->next;
            }
            else
            {
                pre->next = q;
                q = q->next;
            }
            pre = pre->next;
        }
        if(!p)
            pre->next = q;
        if(!q)
            pre->next = p;
        
        return head->next;
    }
};
