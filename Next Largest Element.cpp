#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int A[n];
	    for(long long int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    
	    stack<long long int>Q;
	    
	    long long int ans[n];
	    Q.push(A[n-1]);
	    ans[n-1]=-1;
	    for(long long int i=n-2;i>=0;i--){
	        while(!Q.empty() && A[i]>=Q.top()){
	           Q.pop(); 
	        }
	        if(Q.empty()){
	            ans[i]=-1;
	        }
	        else{
	            ans[i]=Q.top();
	        }
	        
	        Q.push(A[i]);
	    }
	    for(long long int i=0;i<n;i++){
	        cout<<ans[i]<<" ";
	    }
	cout<<endl;
	}
	return 0;
}