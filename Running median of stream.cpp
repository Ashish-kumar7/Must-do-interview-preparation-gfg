#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	priority_queue<int>max_heap;
	priority_queue<int,vector<int>,greater<int>>min_heap;
	int a;
	cin>>a;
	max_heap.push(a);
	double median=a;
	cout<<median<<endl;
	int b;
	for(int i=1;i<n;i++){
	    cin>>b;
	    if(max_heap.size()>min_heap.size()){
	        if(b<median){
	            min_heap.push(max_heap.top());
	            max_heap.pop();
	            max_heap.push(b);
	        }
	        else{
	            min_heap.push(b);
	        }
	        median=(max_heap.top() + min_heap.top())/2.0;
	    }
	    else if(max_heap.size()==min_heap.size()){
	        if(b<median){
	            max_heap.push(b);
	             median=max_heap.top();
	        }
	        else{
	            min_heap.push(b);
                median=min_heap.top();
	        }
	    }
	    else{
	        if(b>median){
	            max_heap.push(min_heap.top());
	            min_heap.pop();
	            min_heap.push(b);
	        }
	        else{
	            max_heap.push(b);
	        }
	        median=(max_heap.top() + min_heap.top())/2.0;
	    }
	    cout<<median<<endl;
	}
	return 0;
}