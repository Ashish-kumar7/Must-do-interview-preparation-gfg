class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        long long int dp[n+1];
        dp[0]=0;
        for(int i=1;i<n;i++){
            dp[i]=INT_MAX;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(i<=j+nums[j]  && dp[j]!=INT_MAX ) {
                    dp[i]=min(dp[i],1+dp[j]);
                }
            }
        }
        return dp[n-1];
    }
};