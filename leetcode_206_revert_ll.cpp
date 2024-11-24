/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *p = NULL;
    struct ListNode *p_r = head;
    struct ListNode *t;
    
    while(p_r != NULL)
    {
        t = p_r->next;
        p_r->next = p;
        p = p_r;
        p_r = t;
    }
    return p;
}
