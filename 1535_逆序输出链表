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
    vector<int> reversePrint(ListNode* head) {
        stack<int> st;
        ListNode* p = head;
        vector<int> l;
        if(head == nullptr)
            return l;
        while(p!=nullptr)
        {
            st.push(p->val);
            p = p->next;
        }
        while(!st.empty())
        {
            l.push_back(st.top());
            st.pop();
        }
        
        return l;
    }
};
