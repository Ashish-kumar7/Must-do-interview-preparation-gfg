vector<int> Solution::solve(TreeNode* A) {
    queue<TreeNode*>Q;
    Q.push(A);
    Q.push(NULL);
    vector<int>V;
    while(!Q.empty()){
        TreeNode * top=Q.front();
        Q.pop();
        if(top==NULL){
            Q.push(NULL);
            if(Q.front()==NULL){
                break;
            }
        }
        while(top!=NULL){
            V.push_back(top->val);
            if(top->left){
            Q.push(top->left);
        }  
            top=top->right;
        }
    }
    return V;
}