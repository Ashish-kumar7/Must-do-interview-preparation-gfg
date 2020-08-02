#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<char>A(n);
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
	int B[26];
	for(int i=0;i<26;i++){
	    B[i]=0;
	}
	queue<char>Q;
	for(int i=0;i<n;i++){
	    B[A[i]-'a']++;
	    Q.push(A[i]);
	    while(!Q.empty()){
	        if(B[Q.front()-'a']>1){
	            Q.pop();
	        }
	        else{
	            cout<<Q.front()<<" ";
	            break;
	        }
	    }
	    if(Q.empty()){
	        cout<<-1<<" ";
	    }
	}
	cout<<endl; 
	}
	return 0;
}