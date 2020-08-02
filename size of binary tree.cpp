void solve(Node * root,int & count){
    if(root==NULL){
        return ;
    }
    solve(root->left,count);
    count++;
    solve(root->right,count);
}
int getSize(Node* root){
   int count=0;
   solve(root,count);
   return count;
}