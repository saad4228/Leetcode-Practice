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
    ListNode*kth(ListNode* head, int k) //if k give if null give null
    { ListNode*traversal=head;
     for(int i=1;i<=k;i++)
     {
        if(traversal==NULL)
        {return NULL;}
        else if(traversal!=NULL && i==k)
        {return traversal;}
        traversal=traversal->next;
     }
     return traversal;
     }

     ListNode* reverseit(ListNode* head)
     {
        ListNode*traversal=head;
        ListNode*back=NULL;
        ListNode*front=head;
        while(traversal!=NULL)
        {
            front=traversal->next;
            traversal->next=back;
            back=traversal;
            traversal=front;
             }
             return back;
     }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode*temp=head;
        ListNode*prevnode=NULL;
        while(temp!=NULL)
        {
            ListNode*kthnode=kth(temp,k);
            if(kthnode==NULL)
            { if(prevnode!=NULL)
               {prevnode->next=temp;
               break;}
               else
               {break;}
            }
            else
            {
            ListNode*nextnode=kthnode->next;
            kthnode->next=NULL;
            ListNode*newhead=reverseit(temp);
            if(head==temp)
            {head=newhead;}
            if(prevnode==NULL)
            {prevnode=temp;}
            else
            {prevnode->next=newhead;
            prevnode=temp;}
            temp=nextnode;
        }
        }
        return head;

        
    }
};