#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int Arrival[n];
    int  Dept[n];
    
    for(int i=0;i<n;i++){
       cin>>Arrival[i];
        // cin>>Dept[i];
    }
    for(int i=0;i<n;i++){
    //   cin>>Arrival[i];
        cin>>Dept[i];
    }
    sort(Arrival,Arrival+n);
    sort(Dept,Dept+n);
    
    int max_platform=0;
    int platform=0;
    int j=0;
    for(int i=0;i<n;){
        if(Arrival[i]<=Dept[j]){
            platform++;
            max_platform=max(max_platform,platform);
            i++;
        }
        else if(Arrival[i]>Dept[j]){
            platform--;
            j++;
        }
    }
    
    cout<<max_platform<<endl;
    }
    
    return 0;
}
