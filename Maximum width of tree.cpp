int getMaxWidth(Node* root){
    if(root==NULL){
        return 0;
    }
    priority_queue<int>pq;
    queue<Node *>Q;
    Q.push(root);
    while(!Q.empty()){
        int size=Q.size();
        pq.push(size);
        for(int i=0;i<size;i++){
           Node * top=Q.front();
           Q.pop();
           if(top->left){
               Q.push(top->left);
           }
            if(top->right){
               Q.push(top->right);
           }
        }
    }
    return pq.top();
}