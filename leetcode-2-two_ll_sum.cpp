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
        int sum = 0;
        int add = 0;
        ListNode* head = new ListNode(-1);
        ListNode* p = head;
        
        while(l1 && l2)
        {
            sum = (l1->val + l2->val + add)%10;
            p->next = new ListNode(sum);
            add = (l1->val + l2->val + add)/10;
            l1 = l1->next;
            l2 = l2->next;
            p = p->next;
        }
        while(l1)
        {
            sum = (l1->val + add)%10;
            add = (l1->val + add)/10;
            p->next = new ListNode(sum);
            l1 = l1->next;
            p = p->next;
        }
        while(l2)
        {
            sum = (l2->val + add)%10;
            add = (l2->val + add)/10;
            p->next = new ListNode(sum);
            l2 = l2->next;
            p = p->next;
        }
        if(add != 0)
        {
            p->next = new ListNode(add);
        }
        return head->next;
    }
};
