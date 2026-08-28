/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {//make copy in b/w, then connect random,then finally seperate using dummy;
    if(head==NULL)return NULL;
    Node*traversal=head;
    while(traversal!=NULL)
    {
        Node*temp=traversal->next;
        Node*newnode=new Node(traversal->val);
        traversal->next=newnode;
        newnode->next=temp;
        traversal=temp;
         }
         traversal=head;
         Node*temp=head->next;
         while(traversal!=NULL)
         {
            if(traversal->random!=NULL)
           {temp->random=traversal->random->next;}
           else
           {temp->random=NULL;}
           traversal=traversal->next->next;
           if(traversal)
           {temp=temp->next->next;}
         }
         Node*dummy=new Node(-1);
          traversal=head;
          temp=head->next;
          dummy->next=temp;
        while(traversal!=NULL)
        {
          traversal->next=temp->next;
          traversal=traversal->next;
          if(traversal==NULL){temp->next=NULL;}
          else
          {temp->next=traversal->next;
          temp=traversal->next;}
        }
        return dummy->next;

     }
};