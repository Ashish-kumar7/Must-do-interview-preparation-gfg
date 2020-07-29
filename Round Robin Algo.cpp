#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int A[n][6];
    int a;
    for(int i=0;i<n;i++){
        cin>>A[i][1];
        A[i][0]=A[i][1];
        A[i][2]=0;
        A[i][3]=0;
        A[i][4]=0;
    }

    int qt;
    cin>>qt;

    while(1){
        int resume=0;
        for(int i=0;i<n;i++){
            if(A[i][4]==0){
                resume=1;
                break;
            }
        }

        if(resume==1){
            for(int i=0;i<n;i++){
                if(A[i][1]>qt){
                    A[i][1]=A[i][1]-qt;
                    for(int j=0;j<n;j++){
                        if(i==j){
                            continue;
                        }
                        else if(A[j][4]==0){
                            A[j][2]=A[j][2]+qt;
                        }
                    }
                }
                else if(A[i][1]<=qt){

                    for(int j=0;j<n;j++){
                        if(i==j){
                            continue;
                        }
                        else if(A[j][4]==0){
                            A[j][2]=A[j][2]+A[i][1];
                        }
                    }
                    A[i][4]=1;
                    A[i][1]=0;
                }
            }
        }
        else if (resume==0){
            break;
        }

    }

    for(int i=0;i<n;i++){
        A[i][3]=A[i][0]+A[i][2];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;

    }


    return 0;

}
