#include<bits/stdc++.h>
using namespace std;

int A[26][26];

int bfs(int n,int m , int sx,int sy,int ex,int ey,int value){
    if(sx<=0 || sy<=0 || sx>n || sy>m || ex<=0 || ey<=0 || ex>n || ey>m){
        return INT_MAX;
    }
    if(A[sx][sy] < INT_MAX && !(sx==ex && sy==ey) ){
        if(A[sx][sy]<=value+1){
            return INT_MAX;
        }
    }
    if(sx==ex && sy==ey){
        return value+1;
    }
    if(A[sx][sy]>value+1){
        A[sx][sy]=value+1;
        int B[8];
        B[0]=bfs(n,m,sx-2,sy+1,ex,ey,value+1);
        B[1]=bfs(n,m,sx-2,sy-1,ex,ey,value+1);
        B[2]=bfs(n,m,sx+2,sy+1,ex,ey,value+1);
        B[3]=bfs(n,m,sx+2,sy-1,ex,ey,value+1);
        B[4]=bfs(n,m,sx-1,sy+2,ex,ey,value+1);
        B[5]=bfs(n,m,sx+1,sy+2,ex,ey,value+1);
        B[6]=bfs(n,m,sx-1,sy-2,ex,ey,value+1);
        B[7]=bfs(n,m,sx+1,sy-2,ex,ey,value+1);
        sort(B,B+8);
        return B[0];
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,m;
	cin>>n;
	cin>>m;
	int a,b,c,d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	for(int i=0;i<26;i++){
	    for(int j=0;j<26;j++){
	        A[i][j]=INT_MAX;
	    }
	}
	int value=0;
	int res=bfs(n,m,a,b,c,d,value);
	if(res==INT_MAX){
	    cout<<-1<<endl;
	}
	else {
	    cout<<res-1<<endl;
	}
	}
	return 0;
}