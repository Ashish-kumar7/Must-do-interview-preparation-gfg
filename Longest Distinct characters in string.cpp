#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int count=0;
	    map<char,int>mp;
	    int i=0;
	    int j=0;
	    int res=INT_MIN;
	    int solution;
	    while(j<str.length()){
	        if(mp.find(str[j])==mp.end()){
	            mp[str[j]]++;
	            j++;
	            res=max(res,j-i);
	            solution =res;
	        }
	        else{
	            auto it=mp.begin();
	            it=mp.find(str[i]);
	            mp.erase(it);
	            res=max(res,j-i);
	            solution =res;
	            i++;
	        }
	    }
	    cout<<solution<<endl;
	}
	return 0;
}