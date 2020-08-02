void solve(node * root,int & mine ,int & maxe){
    if(root==NULL){
        return ;
    }
    solve(root->left,mine,maxe);
    if(root->data<mine){
        mine=root->data;
    }
    if(root->data>maxe){
        maxe=root->data;
    }
    solve(root->right,mine,maxe);
}
// Returns maximum value in a given Binary Tree
int findMax(struct node* root){
    int mine=INT_MAX;
    int maxe=INT_MIN;
    solve(root,mine,maxe);
    return maxe;
}
int findMin(struct node* root){
    int mine=INT_MAX;
    int maxe=INT_MIN;
    solve(root,mine,maxe);
    return mine;
}