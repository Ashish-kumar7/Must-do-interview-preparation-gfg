class Solution{
  public:
    Node* merge(Node* a,Node*b)
    {
        if(a==NULL)
        return b;
        if(b==NULL)
        return a;
        if(a->data<b->data)
        {
            a->next=merge(a->next,b);
            return a;
        }
        else
        {
            b->next=merge(a,b->next);
            return b;
        }
    }
    Node * mergeKLists(Node *arr[], int N)
    {
    
       Node* result=NULL;
       for(int i=0;i<N;i++)
       {
           result=merge(result,arr[i]);
       }
       return result;
           
    }
};
