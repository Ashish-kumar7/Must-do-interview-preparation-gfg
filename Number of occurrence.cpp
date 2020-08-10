#include<bits/stdc++.h>
using namespace std;

int solve1(int A[],int k,int n){
    int start=0;
    int end=n-1;
    int res=-1;
    while(start<=end){
        int mid=(start+end)/2;
        
        if(k==A[mid]){
            res=mid;
            end=mid-1;
        }
        else if(k<A[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return res;
}

int solve2(int A[],int k,int n){
    int start=0;
    int end=n-1;
    int res=-1;
    while(start<=end){
        int mid=(start+end)/2;
        
        if(k==A[mid]){
            res=mid;
            start=mid+1;
        }
        else if(k<A[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return res;
}


int main(){
    
    	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    cin>>k;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
    	int startind=solve1(A,k,n);
	    int endind=solve2(A,k,n);    
	    if(startind !=-1 && endind!=-1){
	         cout<<endind-startind+1<<endl;
	    }
	 else{
	     cout<<-1<<endl;
	 }
	}
	return 0;
}