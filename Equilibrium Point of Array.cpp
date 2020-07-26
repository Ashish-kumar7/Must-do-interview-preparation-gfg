#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    int sum=0;
	    int B[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        sum+=A[i];
	        B[i]=sum;
	    }
	    int C[n];
	    int sum1=0;
	    for(int i=n-1;i>=0;i--){
	        sum1+=A[i];
	        C[i]=sum1;
	    }
	    int flag=0;
	    int res;
	    for(int i=0;i<n;i++){
	        if(C[i]==B[i]){
	            flag=1;
	            res=i+1;
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<-1<<endl;
	    }
	    else {
	        cout<<res<<endl;
	    }
	}
	return 0;
}