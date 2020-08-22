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
	    int  max_val=INT_MIN;
	    int B[n];
	    B[0]=A[0];
	    for(int i=1;i<n;i++){
	        max_val=max(max_val,A[i-1]);
	        B[i]=max_val;
	    }
	    
	    int min_val=INT_MAX;
	    int C[n];
	    C[n-1]=A[n-1];
	    for(int i=n-2;i>=0;i--){
	        min_val=min(min_val,A[i+1]);
	        C[i]=min_val;
	    }
	    int flag=0;
	    int mark=0;
	    
	    for(int i=1;i<n-1;i++){
	        if(B[i]<=A[i] && A[i]<=C[i]){
	            mark=A[i];
	            flag=1;
	            break;
	        }
	    }
	if(flag==0){
	    cout<<-1<<endl;
	}
	else{
	    cout<<mark<<endl;
	}
	}
	return 0;
}