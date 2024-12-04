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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        ListNode* pre = new ListNode(-1);
        
        pre->next = head;
        head = pre;
        while(p && p->next)
        {
            int flag = 0;
            while(p->val == p->next->val)
            {
                flag = 1;
                p->next = p->next->next;
                if(p->next == nullptr)
                {
                    pre->next = p->next;
                    return head->next;
                }
            }
            if(flag == 1)
            {
                pre->next = p->next;
                p = pre->next;
            }
            else
            {
                p = p->next;
                pre = pre->next;
            }
            
        }
        return head->next;
    }
};
