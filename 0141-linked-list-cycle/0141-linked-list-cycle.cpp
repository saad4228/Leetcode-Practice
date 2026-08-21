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
    bool hasCycle(ListNode *head) {
        bool ans=false;
        ListNode*once=head;
        ListNode*twice=head;
        while(twice!=NULL && twice->next!=NULL)
        {
            once=once->next;
            twice=twice->next->next;
            if(once==twice)
            {ans=true;
            break;}
        }
        return ans;

    }
};