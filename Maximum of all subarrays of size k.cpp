#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    int nums[n];
	    for(int i=0;i<n;i++){
	        cin>>nums[i];
	    }
	    vector<int>V;
	    deque<int>dq;
	    vector<int>ans;
	    
	    for(int i=0;i<n;i++){
	        if(!dq.empty() && dq.front()<=(i-k)){
	            dq.pop_front();
	        }
	        while(!dq.empty() && nums[dq.back()]<nums[i]){
	            dq.pop_back();
	        }
	        dq.push_back(i);
	        if(i>=k-1){
	            ans.push_back(nums[dq.front()]);
	        }
	    }
	    for(int i=0;i<ans.size();i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}