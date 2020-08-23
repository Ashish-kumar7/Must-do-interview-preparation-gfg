using namespace std;
void longestCommonPrefix(vector<string>& ar) {
    sort(ar.begin(),ar.end());
        int n=ar.size();
        int h=ar[0].length();
    int x=min(ar[0].length(),ar[n-1].length());
    string a=ar[0];
    string b=ar[n-1];
    int i=0;
    while(i<=h && a[i]==b[i]){
        i++;
    }
    string c=b.substr(0,i);
    if(c.length()>0){
    cout<< c<<endl;
    }
    else if(c.length()==0){
        cout<<-1<<endl;
    }
    }
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<string> A;
	    string s;
	    for(int i=0;i<n;i++){
	        cin>>s;
	        A.push_back(s);
	    }
	 longestCommonPrefix(A);
	}
	return 0;
}