Node* segregate(Node *head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node * zerostart=new Node(-1);
    Node * onestart=new Node(-1);
    Node * twostart=new Node(-1);
    Node * zeroD=zerostart;
    Node  * oneD=onestart;
    Node * twoD=twostart;
    Node * front=head;
    while(front!=NULL){
        if(front->data==0){
            zeroD->next=front;
            front=front->next;
            zeroD=zeroD->next;
        }
        else if(front->data==1){
            oneD->next=front;
            front=front->next;
            oneD=oneD->next;
        }
        else if(front->data==2){
            twoD->next=front;
            front=front->next;
            twoD=twoD->next;
        }
        
    }
    if(onestart->next!=NULL){
        zeroD->next=onestart->next;
    }
    else {
        zeroD->next=twostart->next;
    }
    oneD->next=twostart->next;
    twoD->next=NULL;
    return zerostart->next;
}