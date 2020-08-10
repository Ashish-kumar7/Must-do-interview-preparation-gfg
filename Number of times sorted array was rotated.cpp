#include<bits/stdc++.h>
using namespace std;
long long int pivotind(unsigned long long int a[],unsigned long long int st,unsigned long long int end,unsigned long long int n)
{
    if(st > end)    return 0;
    long long int mid=(st)+ (end-st)/2;
    if(mid+1 < n && a[mid+1] < a[mid])
        return mid+1;
    if(mid-1 >= 0 && a[mid] < a[mid-1])
        return mid;
    if(a[mid] > a[st])
        return pivotind(a,mid+1,end,n);
    else if(a[mid] < a[end])
        return pivotind(a,st,mid-1,n);
    else
        {
            unsigned long long int res1=pivotind(a,mid+1,end,n);
            unsigned long long int res2=pivotind(a,st,mid-1,n);
            if(res1==0)
                return res2;
            return res1;
        }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long int n;
        cin >> n;
        unsigned long long int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        cout << pivotind(a,0,n-1,n) << endl;
    }
	return 0;
}