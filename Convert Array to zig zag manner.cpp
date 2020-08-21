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
	    int flag=1;
	    for(int i=0;i<n-1;i++){
	        if(flag){
	            if(A[i]>A[i+1]){
	                int temp=A[i+1];
	                A[i+1]=A[i];
	                A[i]=temp;
	            }
	        }
	        else{
	            if(A[i]<A[i+1]){
	                int temp=A[i+1];
	                A[i+1]=A[i];
	                A[i]=temp;
	            }
	            
	        }
	        flag=!flag;
	    }
	    for(int i=0;i<n;i++){
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	
	}
	return 0;
}