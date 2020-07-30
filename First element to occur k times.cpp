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
	     unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        mp[A[i]]++;
	    }
	   int flag=0;
	    for(int i=0;i<n;i++){
	        auto it =mp.find(A[i]);
	        if(it->second==k){
	            flag=1;
	           cout<<A[i]<<endl;
	            break; 
	        }
	        }
	        if(flag==0){
	            cout<<-1<<endl;
	        }
	    }
	return 0;
}