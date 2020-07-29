#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	   string s1,s2;
	   cin>>s1;
	   cin>>s2;
	  map<char,int>mp1;
	  map<char,int>mp2;
	  for(int i=0;i<s1.length();i++){
	      mp1[s1[i]]++;
	  }
	  for(int i=0;i<s2.length();i++){
	      mp2[s2[i]]++;
	  }
	  string ans="";
	  for(auto it=mp1.begin();it!=mp1.end();it++){
	      if(mp2.find(it->first)==mp2.end()){
	          ans+=(it->first);
	      }
	  }
	  for(auto it=mp2.begin();it!=mp2.end();it++){
	      if(mp1.find(it->first)==mp1.end()){
	          ans+=(it->first);
	      }
	  }
	  sort(ans.begin(),ans.end());
	  cout<<ans<<endl;
	}
	return 0;
}