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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*traversal=head;
        ListNode*temp=head;
        ListNode*back=NULL;
        while(traversal!=NULL)
        {
        if(traversal->val==val)
         {
            temp=traversal;
            traversal=traversal->next;
            if(temp==head)
            {
              head=temp->next;
              temp->next=NULL;
              delete(temp);
            }
            else if(temp->next==NULL)
            {
              back->next=NULL;
              delete(temp);
            }
            else
            {
               back->next=temp->next;
               temp->next=NULL;
               delete(temp);
            }
         }
         else
         {
            back=traversal;
            traversal=traversal->next;
        }
        }
        return head;
        
    }
};