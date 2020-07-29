#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    
	    for(int i=0;i<n;i=i+k){
	        int start=i;
	        int  end=min(i+k-1,n-1);
	        while(start<=end){
	            int temp=A[start];
	            A[start]=A[end];
	            A[end]=temp;
	            start++;
	            end--;
	        }
	    }
	    
	for(int i=0;i<n;i++){
	    cout<<A[i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}