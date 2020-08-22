using namespace std;
int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int flag=0;
        int buy=0;
        int sell=0;
        int i=0;
        
        while(i<n-1){
            if(A[i+1]>=A[i]){
                sell++;
                i++;
              // flag=1;
            }
            else{
                if(sell-buy>0){
                    cout<<"("<<buy<<" "<<sell<<")"<<" ";
                    flag=1;
                }
                sell=i+1;
                buy=i+1;
                i++;
            }
        }
        if(sell-buy>0){
            cout<<"("<<buy<<" "<<sell<<")"<<" ";
            flag=1;
        }
        if(flag==0){
            cout<<"No Profit";
        }
cout<<endl;
        
    }
    return 0;
    
}
