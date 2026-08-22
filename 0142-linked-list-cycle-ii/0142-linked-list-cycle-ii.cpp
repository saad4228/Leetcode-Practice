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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)return NULL;
        ListNode *once=head;
         ListNode *twice=head;
         while(twice!=NULL &&twice->next!=NULL)
         {
            once=once->next;
            twice=twice->next->next;
            if(once==twice)
            {break;}
         }
         if(once!=twice)return NULL;
         once=head;
         while(once!=twice)
         {
             once=once->next;
            twice=twice->next;
         }
         return once;
        
    }
};