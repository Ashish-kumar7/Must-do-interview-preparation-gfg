class Solution {
public:
vector<int> inorderTraversal(TreeNode* root) {
       stack<TreeNode*>S;
        TreeNode * curr=root;
         vector<int>V;
        while(!S.empty()  || curr!=NULL){
            while(curr!=NULL){
                S.push(curr);
                curr=curr->left;
            }
            curr=S.top();
            S.pop();
            V.push_back(curr->val);            
            curr=curr->right;
        }
        return V;
    }
};