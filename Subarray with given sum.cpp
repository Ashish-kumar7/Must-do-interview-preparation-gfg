#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int s;
	    cin>>n;
	    cin>>s;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    int left=0;
	    int sum=0;
	    int start=-1;
	    int end=-1;
	    for(int i=0;i<=n;i++){
	        while(sum>s && left<n){
	            sum=sum-A[left];
	            left++;
	        }
	        if(sum==s){
	            start=left;
	            end=i;
	            break;
	        }
	        if(i<n){
	            sum=sum+A[i];
	        }
	    }
	    if(start==-1 && end==-1){
	        cout<<-1;
	    }
	    else {
	       cout<<start+1<<" "<<end;
	    }
	    cout<<endl;
	}
	return 0;
}