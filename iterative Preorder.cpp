class Solution {
public:
vector<int> preorderTraversal(TreeNode* root) {
    vector<int>V;
    if(root==NULL){
          return V;
      }
    stack<TreeNode*>S;
    TreeNode * curr=root;
        S.push(curr);
    while(!S.empty() ){
        curr=S.top();
        V.push_back(curr->val);
        S.pop();
       if(curr->right) S.push(curr->right);
        if(curr->left) S.push(curr->left);
    }
    return V;
    }
};