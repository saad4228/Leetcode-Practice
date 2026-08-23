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
    ListNode* reverselist(ListNode* head)
    {
      ListNode*back=NULL;
      ListNode*temp=head;
      ListNode*front=head;
      while(temp!=NULL)
      {
        front=front->next;
        temp->next=back;
        back=temp;
        temp=front;
      }
      return back;

    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)
    return true;
      ListNode*once=head;
       ListNode*twice=head;
       while(twice->next!=NULL && twice->next->next!=NULL)//we want to stop just before middle in even case and in odd in middle
       {
        twice=twice->next->next;
        once=once->next;
       }
       ListNode*first=head;
       ListNode*second=reverselist(once->next);
       ListNode*newhead=second;

       while(second!=NULL)
       {
        if(first->val==second->val)
        {first=first->next;
        second=second->next;}
        else
        {return false;}
       }
       reverselist(newhead);
       return true;

        
    }
};