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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)return head;
        int size=1;
        ListNode*lastnode=head;
        ListNode*temp=head;
        while(lastnode->next!=NULL)
        {
          size++;
          lastnode=lastnode->next;
         }//now we know lastnode and size;
         k=k%size;
         if(k==0){return head;}
         int elementindex=size-k;
         int count=1;
         while(count<elementindex)
         {
            count++;
            temp=temp->next;
         }
         lastnode->next=head;
         head=temp->next;
         temp->next=NULL;
         return head;
}
};