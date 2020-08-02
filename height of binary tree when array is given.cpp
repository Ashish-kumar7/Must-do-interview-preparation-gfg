void solve(int parent[],int i,int depth[]){
    if(depth[i]!=0){
        return ;
    }
    if(parent[i]==-1){
        depth[i]=1;
        return ;
    }
    if(depth[parent[i]]==0){
        solve(parent,parent[i],depth);
    }
    depth[i]=depth[parent[i]] +1;
}
int height(int parent[],int n){
    int depth[n];
    for(int i=0;i<n;i++){
        depth[i]=0;
    }
    
    for(int i=0;;i<n;i++){
        solve(parent,i,depth);
    }
    int max_val=INT_MIN;
    for(int i=0;i<n;i++){
        max_val=max(max_val,depth[i]);
    }
    return max_val;
}