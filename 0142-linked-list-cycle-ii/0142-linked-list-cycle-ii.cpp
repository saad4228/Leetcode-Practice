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
        ListNode *temp=head;
        map<ListNode *,int>mpp;
        while(temp!=NULL)
        {
            if(mpp.find(temp)!=mpp.end()) //means it exists;
            {break;}
            else
            mpp[temp]++;
            temp=temp->next;
        }
        if(temp==NULL)
        return NULL;
        else
        return temp;
        
    }
};