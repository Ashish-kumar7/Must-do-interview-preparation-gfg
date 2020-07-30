#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	unsigned long  long int t;
	cin>>t;
	while(t--){
	    unsigned long  long int n1;
	    unsigned long  long int n2;
	    unsigned long  long int n3;
	    cin>>n1;
	    cin>>n2;
	    cin>>n3;
	    unsigned long  long int A[n1];
	    unsigned long  long int B[n2];
	    unsigned long  long int C[n3];
	    unordered_map<unsigned long  long int,unsigned long  long int>mp1;
	    for(unsigned long  long int i=0;i<n1;i++){
	        cin>>A[i];
	        mp1[A[i]]++;
	    }
	     for(unsigned long  long int i=0;i<n2;i++){
	        cin>>B[i];
	    }
	     for(unsigned long  long int i=0;i<n3;i++){
	        cin>>C[i];
	    }
	   unordered_map<unsigned long  long int,unsigned long  long int>mp2;
	    for(unsigned long  long int i=0;i<n2;i++){
	        if(mp1.find(B[i])!=mp1.end()){
	            mp2[B[i]]++;
	        }
	    }
	    map<unsigned long  long int,unsigned long  long int>D;
	    for(unsigned long  long int i=0;i<n3;i++){
	        if(mp2.find(C[i])!=mp2.end()){
	            D[C[i]]++;
	        }
	    }
	    if(D.size()>0){
    	    for(auto it=D.begin();it!=D.end();it++){
    	        cout<<it->first<<" ";
    	    }
	    }
	    else {
	        cout<<-1;
	    }
	    cout<<endl;
	}
	return 0;
}