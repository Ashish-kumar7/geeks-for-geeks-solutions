#include<bits/stdc++.h>
using namespace std;
int n,m;
int A[1000][1000];
void dfs(int sx,int sy,int fx,int fy,int min,int & min_val){
    if(sx<0 || sx>=n || sy<0 || sy>=m){
        return ;
    }
    if(A[sx][sy]==0 || A[fx][fy]==0){
        return;
    }
    if(sx==fx && sy==fy){
        if(min_val>min){
            min_val=min;
        }
        return;
    }
    A[sx][sy]=0;
    dfs(sx+1,sy,fx,fy,min+1,min_val);
    dfs(sx,sy-1,fx,fy,min+1,min_val);
    dfs(sx-1,sy,fx,fy,min+1,min_val);
    dfs(sx,sy+1,fx,fy,min+1,min_val);
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>n;
	cin>>m;
//int A[n][m];
	int x;
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        cin>>x;
	       A[i][j]=x;
	    }
	}
	int p,q;
	cin>>p;
	cin>>q;
	int steps=0;
	int min_steps=1000;
	dfs(0,0,p,q,steps,min_steps);
	if(min_steps==1000){
	    cout<<-1<<endl;
	}
	else {
	    cout<<min_steps<<endl;
	}
	}
	return 0;
}