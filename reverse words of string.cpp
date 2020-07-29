#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    stack<string>st;
	    string str1="";
	    for(int i=0;i<s.length();i++){
	       if(s[i]!='.'){
	        str1+=s[i];
	       }
	       else if(s[i]=='.') {
	           //cout<<str1<<" ";
	           st.push(str1);
	           str1.clear();
	       }
	    }
	    st.push(str1);
	    while(!st.empty()){
	        cout<<st.top();
	        if(st.size()>1){
	            cout<<".";
	        }
	        st.pop();
	    }
	    cout<<endl;
	}
	return 0;
}