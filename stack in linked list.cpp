void MyStack ::push(int x) {
    StackNode * temp=new StackNode(x);
    if(top==NULL){
        top=temp;
    }
    else{
        temp->next=top;
        top=temp;
}
}
int MyStack ::pop() {
    if(top==NULL){
        return -1;
    }
    else {
        int x=top->data;
        top=top->next;
        return x;
    }
}
