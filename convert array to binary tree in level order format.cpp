Node * solve(int arr[],int i,int n){
    if(i>=n){
        return NULL;
    }
    Node * root=new Node (arr[i]);
    root->left=solve(arr,2*i +1 ,n);
    root->right=solve(arr,2*i +2 ,n);
    return root;
}