class Solution {
public:
    void make_map(TreeNode * root,map<TreeNode*,TreeNode*>&mp){
        if(root==NULL){
            return;
        }
        mp[root->left]=root;
        mp[root->right]=root;
        make_map(root->left,mp);
        make_map(root->right,mp);
   }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>V;
        map<TreeNode *,TreeNode *>mp;
        make_map(root,mp);
        queue<TreeNode*>Q;
        Q.push(target);
        int count=0;
        vector<int>check(10000,0);
        while(!Q.empty()){
            int size=Q.size();
            while(size--){
                TreeNode* temp=Q.front();
                Q.pop();
                if(count==k){
                    V.push_back(temp->val);
                }
                else {
                    check[temp->val]=1;
                    if(temp->left && check[temp->left->val]==0 ){
                        Q.push(temp->left);
                    }
                    if(temp->right && check[temp->right->val]==0 ){
                        Q.push(temp->right);
                    }
                    if(mp.find(temp)!=mp.end()  && check[mp[temp]->val]==0 ){
                        Q.push(mp[temp]);
                    }
                }
            }
            count++;
        }
        return V;
    }
};