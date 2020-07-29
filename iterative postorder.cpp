class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>V;
        if(root==NULL){
            return V;
        }
        stack<TreeNode *>S1;
        stack<TreeNode *>S2;
        S1.push(root);
        TreeNode * curr=root;
        while(!S1.empty()){
            curr=S1.top();
            S1.pop();
            S2.push(curr);
            if(curr->left){
                S1.push(curr->left);
            }
            if(curr->right){
                S1.push(curr->right);
            }
        }
        while(!S2.empty()){
            V.push_back(S2.top()->val);
            S2.pop();
        }
        return V;
    }
};