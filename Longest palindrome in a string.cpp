using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.length();
	    int l=s.length();
	    int dp[l+1][l+1];
	    
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=n;j++){
	            dp[i][j]=0;
	        }
	    }
	    
	    for(int i=0;i<=n;i++){
	       dp[i][i]=1;
	    }
	    int start=0;
	    int flag=0;
	    int max_len=1;
	    for(int i=0;i<n-1;i++){
	        if(s[i]==s[i+1]){
	            dp[i][i+1]=1;
	            if(start==0 && flag==0){
	                start=i;
	                flag=1;
	                max_len=2;
	            }
	        }
	    }
	    for(int len=3;len<=n;len++){
	        for(int i=0;i<n-len+1;i++){
	            int j=i+len-1;
	        if(s[i]==s[j] && dp[i+1][j-1]==1){
	            dp[i][j]=1;
	            if(max_len<len){
	                max_len=len;
	                start=i;
	            }
	        }
	       }
	    }
	    for(int i=0;i<max_len;i++){
	        cout<<s[i+start];
	    }
	cout<<endl;
	
	}
	return 0;
}