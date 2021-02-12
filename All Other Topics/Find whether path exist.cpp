#include<bits/stdc++.h>
using namespace std;
int n;
int A[1000][1000];
int DFS(int x,int y){
    if(x<0 || y<0 || x>=n || y>=n || A[x][y]==0){
        return 0;
    }
    if(A[x][y]==2){
        return 1;
    }
    A[x][y]=0;
   if( DFS(x+1,y) ||  DFS(x-1,y) || DFS(x,y+1) ||  DFS(x,y-1)){
       return 1;
   }
}
int main(){
	int t;
	cin>>t;
	while(t--){
	   // int n;
	    cin>>n;
	    //int A[n][n];
	    int x;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>x;
	            A[i][j]=x;
	        }
	    }
	    int sx,sy;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(A[i][j]==1){
	                sx=i;
	                sy=j;
	            }
	        }
	    }
	    int xx=DFS(sx,sy);
	    cout<<xx<<endl;
	}
	return 0;
}