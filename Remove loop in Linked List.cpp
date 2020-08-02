void removeLoop(Node* head){
    if(head==NULL){
        return ;
    }
    Node * a=head;
    Node * b=head;
    int flag=0;
    
    while(a!=NULL && b!=NULL && b->next!=NULL){
        a=a->next;
        b=b->next->next;
        if(a==b){
            flag=1;
            break;
        }
    }
    if(flag==1){
        a=head;
        while(a!=b){
            a=a->next;
            b=b->next;
        }
        while(b->next!=a){
            b=b->next;
        }
         b->next=NULL;
    }
}