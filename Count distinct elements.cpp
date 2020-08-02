vector <int> countDistinct (int A[], int n, int k){
    unordered_map<int,int>mp;
    for(int i=0;i<k;i++){
            mp[A[i]]++;
        }
    int count=mp.size();
    vector<int>V;
    V.push_back(mp.size());
    for(int j=k;j<n;j++){
        if(mp[A[j-k]]==1){
             count--;
        }
    mp[A[j-k]]--;
        if(mp[A[j]]==0){
             count++;
        }
    mp[A[j]]++;
    V.push_back(count);
    }
    return V;
}