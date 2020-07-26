#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    int B[n];
	    int C[n];
	    int h=0;
	    for(int i=0;i<n;i++){
	        h=max(A[i],h);
	        B[i]=h;
	    }
	    B[0]=A[0];
	    C[0]=A[0];
	    int l=0;
	    for(int i=n-1;i>0;i--){
	        l=max(A[i],l);
	        C[i]=l;
	    }
	    int sum=0;
	    for(int i=1;i<n-1;i++){
	        sum=sum+(min(B[i],C[i])-A[i]);
	    }
	cout<<sum<<endl;
	}
	return 0;
}