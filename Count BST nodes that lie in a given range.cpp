void solve(Node *root, int l, int h,int & count){
    if(root==NULL){
        return ;
    }
    solve(root->left,l,h,count);
    if(root->data<=h && root->data>=l){
        count++;
    }
    solve(root->right,l,h,count);
}
int getCountOfNode(Node *root, int l, int h){
  int count=0;
  solve(root,l,h,count);
  return count;
}