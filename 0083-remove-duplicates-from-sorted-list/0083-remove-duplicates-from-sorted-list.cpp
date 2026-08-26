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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode*traversal=head;
        ListNode*temp=traversal->next;
        while(traversal!=NULL && traversal->next!=NULL)
        {
           while(temp!=NULL && temp->val==traversal->val)
           {
            ListNode*del=temp;
            temp=temp->next;
            delete(del);
           }//now diff node
           if(temp!=NULL)
           {traversal->next=temp;
           traversal=temp;
           temp=traversal->next;}
           else
           {traversal->next=temp;
           traversal=temp;}
        }
        return head;
}
};