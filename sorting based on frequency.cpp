#include<bits/stdc++.h>
using namespace std;
bool sortfunc(pair<int,int>a , pair<int,int>b){
    if(a.first!=b.first){
        return a.first>b.first;
    }
    else{
        return a.second<b.second;
    }
}
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    vector<pair<int,int>>V;
	    int n;
	    cin>>n;
	    int a,b;
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        mp[a]++;
	    }
	    for(auto it=mp.begin();it!=mp.end();it++){
	        V.push_back({it->second,it->first});
	    }
	    sort(V.begin(),V.end(),sortfunc);
	for(int i=0;i<V.size();i++){
	    for(int j=0;j<V[i].first;j++){
	        cout<<V[i].second<<" ";
	    }
	}
	cout<<endl;
	}
	return 0;
}