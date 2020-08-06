#include<bits/stdc++.h>
using namespace std;

int solve(int A[],int start,int end,int search){
    // int mid= (start +end)/2;
    while(start<=end){
         int mid= (start +end)/2;
        if(A[mid]==search){
            return 1;
        }
        else if(search<A[mid]){
           end=mid-1;
           start=start;
        }
        else if(search>A[mid]){
           start=mid+1;
           end=end;
        }
    }
    return -1;
}
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int search;
	cin>>search;
	
	int A[n];
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
	cout<<solve(A,0,n-1,search)<<endl;
	}
	return 0;
}