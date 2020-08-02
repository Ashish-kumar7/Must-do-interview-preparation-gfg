void solve(Node * root,int & k,int & res){
    if(root==NULL){
        return ;
    }
    solve(root->left,k,res);
    k--;
    if(k==0){
        res=root->data;
        return ;
    }
    solve(root->right,k,res);
}
int KthSmallestElement(Node *root, int K){
    if(root==NULL){
        return -1;
    }
    int res=-1;
    solve(root,K,res);
    return res;
}