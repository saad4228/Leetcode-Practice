/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution { //we dont have to sort it, just flatten it
public:
    Node* flatten(Node* head) {
        Node*traversal=head;
        if(head==NULL)
        {return head;}
          while(traversal!=NULL)
          {
            if(traversal->child!=NULL)
            {
                Node*nextnode=traversal->next;
                Node*childhead=traversal->child;
                Node*childtraversal=childhead;
                while(childtraversal->next!=NULL)
                {
                    childtraversal=childtraversal->next;
                }
                traversal->next=childhead;
                childhead->prev=traversal;
                childtraversal->next=nextnode;
                if(nextnode!=NULL)
                {nextnode->prev=childtraversal;}
                traversal->child=NULL;
                traversal=traversal->next;
                }
                else
                {traversal=traversal->next;}
          }
          return head;
        }
        
    };
