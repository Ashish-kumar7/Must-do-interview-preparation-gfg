using namespace std;
void rearrange(long long int A[], int n) { 
    int max_element=A[n-1]+1;
    int max_index=n-1;
    int min_index=0;
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            A[i]=A[i]+(A[max_index]%max_element)*max_element;
            max_index--;
        }
        else{
            A[i]=A[i]+(A[min_index]%max_element)*max_element;
            min_index++;
        }
    }
    for(int i=0;i<n;i++){
        A[i]=A[i]/max_element;
    }
    
    return ;
    
}
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   long long int A[n];;
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	   rearrange(A,n);
	    for(int i=0;i<n;i++){
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}