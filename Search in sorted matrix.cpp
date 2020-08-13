#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,m,i,j,x,f=0;
	    cin>>n>>m;
	    int a[n][m];
	    for(i=0;i<n;i++)
	        for(j=0;j<m;j++)
	            cin>>a[i][j];
	    cin>>x;
	    i=0,j=m-1;
	    while(i<n && j>=0){
	        if(a[i][j]==x){
	            f=1;
	            break;
	        }
	        else if(a[i][j]>x){
	            j--;
	        }
	        else{
	            i++;
	        }
	    }
	    cout<<f<<endl;
	}
	return 0;
}