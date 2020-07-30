class Solution {
public:
    void solve(TreeNode* root,TreeNode* &prev, TreeNode * &front ,TreeNode* &end){
        if(root==NULL){
            return;
        }
        solve(root->left,prev,front,end);
        if(prev!=NULL && prev->val >root->val){
            if(front==NULL){
                front=prev;
            }
            end=root;
        }
        prev=root;
        solve(root->right,prev,front,end);
    }
    void recoverTree(TreeNode* root) {
        if(root==NULL){
            return;
        }
        TreeNode * prev=NULL;
        TreeNode * front=NULL;
        TreeNode * end=NULL;
        
        solve(root,prev,front,end);
        
        int temp=front->val;
        front->val=end->val;
        end->val=temp;
    
    }
};