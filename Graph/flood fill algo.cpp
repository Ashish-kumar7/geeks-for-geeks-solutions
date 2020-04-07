#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void filling(int a,int b,int A[101][101],int x,int y,int prev,int color1){
    if(x<0 || x>=a || y<0 || y>=b){
        return ;
    }
    if(A[x][y]!=prev){
        return ;
    }
    A[x][y]=color1;
    filling(a,b,A,x+1,y,prev,color1);
    filling(a,b,A,x-1,y,prev,color1);
    filling(a,b,A,x,y+1,prev,color1);
    filling(a,b,A,x,y-1,prev,color1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
        int n,m;
        cin>>n;
        cin>>m;
        int A[101][101];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int p;
                cin>>p;
                A[i][j]=p;
            }
        }
        int x,y;
        cin>>x;
        cin>>y;
        int color;
        cin>>color;
        
        int prev=A[x][y];
        
        filling(n,m,A,x,y,prev,color);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<A[i][j]<<" ";
            }
        }
        cout<<endl;
	}
	return 0;
}