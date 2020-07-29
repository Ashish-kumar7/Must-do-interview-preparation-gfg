#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n;
	    cin>>m;
	    int A[n];
	    int B[m];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    vector<int>V;
	    for(int i=0;i<m;i++){
	        cin>>B[i];
	    }
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        mp[A[i]]++;
	    }
	    for(int i=0;i<m;i++){
	        for(int j=0;j<mp[B[i]];j++){
	           V.push_back(B[i]);
	        }
	        mp.erase(B[i]);
	    }
	     vector<int> vec;
	    for(int i = 0;i < n;i++){
	        if(mp.count(A[i]) > 0)
	            vec.push_back(A[i]);
	    }
	    sort(vec.begin(), vec.end());
        for(int k=0;k<vec.size();k++){
            V.push_back(vec[k]);
        }
	    for(int i=0;i<V.size();i++){
	        cout<<V[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}