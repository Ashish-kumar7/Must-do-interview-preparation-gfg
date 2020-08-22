using namespace std;
int findingit(int A[10000000],int n){
    int sum=INT_MIN;
    int find1=0;
    for(int i=0;i<n;i++){
        find1+=A[i];
        if(sum<find1){
            sum=find1;
        }
        if(find1<0){
            find1=0;
        }
    }
    return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
	cout<<findingit(A,n);
	cout<<endl;
	}
	return 0;
}