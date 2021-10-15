class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node *curr=head,*res,*prev,*tail;
       int count=0;
       while(curr!=NULL){
           count++;
           if(count==k){
               tail=curr;
               res=curr->next;
           }
           prev=curr;
           curr=curr->next;
       }
       if(count==k){
           return head;
       }
       prev->next=head;
       tail->next=NULL;
       return res;
    }
};
    
