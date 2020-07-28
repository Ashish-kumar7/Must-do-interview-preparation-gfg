int maxLen(int A[], int n){
    unordered_map<int,int>mp;
    int sum=0;
    int i=0;
    int max_len=0;
    while(i<n){
        sum=sum+A[i];
        if(sum==0){
            max_len=max(max_len,i+1);
        }
        else if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
        else {
            max_len=max(max_len,i-mp[sum]);
        }
        i++;
    }
    return max_len;
}