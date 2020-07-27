#include<bits/stdc++.h>
using namespace std;
vector<string>V;
void solve(string s,int x,int y){
    if(x==y){
        V.push_back(s);
    }
    else {
        for(int i=x;i<=y;i++ ){
           swap(s[x],s[i]);
           solve(s,x+1,y);
           swap(s[x],s[i]);
        }
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    V.clear();
	    int n=s.length();
	    solve(s,0,n-1);
	    sort(V.begin(),V.end());
	for(int i=0;i<V.size();i++){
	    cout<<V[i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}