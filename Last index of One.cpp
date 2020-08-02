#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    int flag=0;
	    int ans;
	    cin>>str;
	    for(int i=str.length()-1;i>=0;i--){
	        if(str[i]=='1'){
	            flag=1;
	            ans=i;
	           // cout<<i<<endl;
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<ans<<endl;
	    }
	
	}
	return 0;
}