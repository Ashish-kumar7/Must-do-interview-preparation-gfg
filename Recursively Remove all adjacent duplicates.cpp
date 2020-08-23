using namespace std;
bool f=true;
 void solve(string s,string &g){
   
    
    
    int n=s.length();
    
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){f=false;break;}
    }
  
    
    if(f==false){
      if(s[0]!=s[1])g+=s[0];
	    for(int i=1;i<n-1;i++){
	        if(s[i]!=s[i-1] && s[i]!=s[i+1])g+=s[i];
	    }
	    if(s[n-2]!=s[n-1])g+=s[n-1];
    
}
     
 }

int main() {
	int n;
	cin>>n;
	while(n--){
	    string s;
	    cin>>s;
	    int n=s.length();
	  string g;
	   
	    f=true;
	    while(1){
	        f=true;
	          g="";
	          
	        solve(s,g);
	         if(f==true)break;
	         
	          s=g;
	      
	       
	        
	    }
	    
	    
	    cout<<s<<endl;
	    
	    
	}
	return 0;
}