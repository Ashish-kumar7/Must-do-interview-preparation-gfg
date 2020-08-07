class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
        int n=A.size();
        vector<unordered_map<int,int>>dp(n);
        int result=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int diff=A[i]-A[j];
                if(dp[j].count(diff) > 0){
                    dp[i][diff]=dp[j][diff]+1;
                }
                else{
                    dp[i][diff]=2;
                }
                result=max(result,dp[i][diff]);
            }
        }
        return result;
    }
};