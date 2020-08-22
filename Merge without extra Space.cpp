using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n;
	    cin>>m;
	    int A[n+m];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    int B[m];
	    for(int i=0;i<m;i++){
	        cin>>B[i];
	    }
	    
	    int i=n-1;
	    int j=m-1;
	    int k=1;
	    
	    while(i>=0 && j>=0){
	        if(A[i]<B[j]){
	            A[m+n-k]=B[j];
	            j--;
	            k++;
	        }
	        else {
	            A[m+n-k]=A[i];
	            i--;
	            k++;
	        }
	        
	    }
	    
	    while(i>=0){
	        A[m+n-k]=A[i];
	        i--;
	        k++;
	    }
	    
	    while(j>=0){
	        A[m+n-k]=B[j];
	        j--;
	        k++;
	    }
	    
	    
	    for(int i=0;i<n+m;i++){
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	
	}
	return 0;
}