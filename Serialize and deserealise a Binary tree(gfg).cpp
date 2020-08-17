void serialize(Node *root,vector<int> &A){
    if(root==NULL){
        A.push_back(-1);
        return ;
    }
    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
}
 Node * deserialize(vector<int>& A,int &index){
     if(A[index]==-1 || index>A.size()){
         index++;
         return NULL;
     }
     Node * temp=new Node (A[index]);
     index++;
     temp->left=deserialize(A,index);
     temp->right=deserialize(A,index);
     return temp;
 }
Node * deSerialize(vector<int> &A){
    int index=0;
    return deserialize(A,index);
}