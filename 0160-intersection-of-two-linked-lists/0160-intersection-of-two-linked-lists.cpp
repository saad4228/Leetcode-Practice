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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *begin1=headA;
         ListNode *begin2=headB;

        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
            if(headA==headB)
            {return headA;}
            if(headA==NULL)
            {headA=begin2;}
            if(headB==NULL)
            {headB=begin1;}
        }
    return headA;
        
    }
};