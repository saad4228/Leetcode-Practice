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
    ListNode* middle(ListNode* head) {
        ListNode*once=head;
        ListNode*twice=head;
        while(twice->next!=NULL && twice->next->next!=NULL)
        {
            twice=twice->next->next;
            once=once->next;
        }
         return once;}

    ListNode* merge(ListNode* head1,ListNode* head2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(head1!=NULL && head2!=NULL)
        {
            if(head1->val < head2->val)
            {
                dummy->next=head1;
                dummy=head1;
                head1=head1->next;
            }
            else
            {
                dummy->next=head2;
                dummy=head2;
                head2=head2->next;
            }}
            if(head1)
            {dummy->next=head1;}
            else
            {dummy->next=head2;}
            return temp->next;}


      ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode*mid1=middle(head);
        ListNode*mid2=mid1->next;
        mid1->next=NULL;
        ListNode*left=sortList(head);
        ListNode*right=sortList(mid2);
        return merge(left,right);
    
      }
};