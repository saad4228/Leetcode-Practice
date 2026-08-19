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
    ListNode* deleteMiddle(ListNode* head) {
        if (head==NULL){return NULL;}
       if (head->next==NULL){return NULL;}
       
        ListNode*twice=head;
        ListNode*once=head;
        ListNode*prev=NULL;
         
        while(twice!=NULL && twice->next!=NULL)
        {   prev=once;
            twice=twice->next->next;
            once=once->next;}
            prev->next=once->next;
        once->next=NULL;
        delete(once);
        return head;
         }
};