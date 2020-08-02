class solver{
private:
public:
void make_map(Node * root,map<Node*,Node*>&mp){
        if(root==NULL){
            return;
        }
        mp[root->left]=root;
        mp[root->right]=root;
        make_map(root->left,mp);
        make_map(root->right,mp);
  }
vector<int> distanceK(Node* root, Node* target, int k) {
        vector<int>V;
        map<Node *,Node *>mp;
        make_map(root,mp);
        queue<Node*>Q;
        Q.push(target);
        int count=0;
        vector<int>check(10000,0);
        while(!Q.empty()){
            int size=Q.size();
            while(size--){
                Node* temp=Q.front();
                Q.pop();
                if(count==k){
                    V.push_back(temp->data);
                }
                else {
                    check[temp->data]=1;
                    if(temp->left && check[temp->left->data]==0 ){
                        Q.push(temp->left);
                    }
                    if(temp->right && check[temp->right->data]==0 ){
                        Q.push(temp->right);
                    }
                    if(mp.find(temp)!=mp.end()  && check[mp[temp]->data]==0 ){
                        Q.push(mp[temp]);
                    }
                }
            }
            count++;
        }
        return V;
    }
    void findthetarget(Node*root,int target,Node * & result){
        if(root==NULL){
            return ;
        }
        if(root->data==target){
            result=root;
            return ;
        }
        findthetarget(root->left,target,result);
        findthetarget(root->right,target,result);
        return  ;
    }
    vector <int> KDistanceNodes(Node* root, int target , int k){
        Node *result=NULL;
        findthetarget(root,target,result);
        Node * ans=result;
        vector<int>V;
        V=distanceK(root,ans,k);
        sort(V.begin(),V.end());
        return V;
    }
};