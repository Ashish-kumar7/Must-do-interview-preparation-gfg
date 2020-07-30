void MyQueue:: push(int x){
        QueueNode * temp=new QueueNode(x);
        if(front==NULL){
            front=rear=temp;
            return ;
        }
        rear->next=temp;
        rear=temp;
}
int MyQueue :: pop(){
        if(front==NULL){
            return -1;
        }
        int x=front->data;
        front=front->next;
        return x;
}