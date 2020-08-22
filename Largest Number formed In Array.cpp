using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            string str1=to_string(A[i]) + to_string(A[j]);
                string str2=to_string(A[j]) + to_string(A[i]);
                
                int val1=stoi(str1);
                int val2=stoi(str2);
                
                if(val1<val2){
                    int temp=A[i];
                    A[i]=A[j];
                    A[j]=temp;
                }
	            
	        }
	    }
	    
	    string str3="";
	    
	    
	    for(int i=0;i<n;i++){
	        str3+=to_string(A[i]);
	    }
	    cout<<str3<<endl;
	
	
	}
	return 0;
}