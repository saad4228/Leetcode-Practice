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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return NULL;
        int i=0; vector<int> arr;
       while(list1!=NULL)
       {
        arr.push_back(list1->val);;
        list1=list1->next;
        }
        while(list2!=NULL)
       {
        arr.push_back(list2->val);
        list2=list2->next;
        } 
        sort(arr.begin(),arr.end());
        ListNode*newhead= new ListNode(arr[0]);
        ListNode*temp= newhead;
         for(int j=1;j<arr.size();j++)
         {
            ListNode*newnode= new ListNode(arr[j]);
            temp->next=newnode;
            temp=newnode;
         }
         return newhead;
    }};