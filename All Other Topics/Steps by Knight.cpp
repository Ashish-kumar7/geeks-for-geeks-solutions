#include<bits/stdc++.h>
using namespace std;
int bfs(int A[21][21],int n,int sx,int sy,int ex,int ey,int val){
    if(sx<=0 || sy<=0 || sx>n || sy>n || ex<=0 || ey<=0 ||ex>n || ey>n){
        return INT_MAX;
    }
    if(A[sx][sy]<INT_MAX && !(sx==ex &&  sy==ey)){
        if(A[sx][sy]<=val+1){
            return INT_MAX;
        }
    }
    if(sx==ex && sy==ey){
        return val+1;
    }
    if(A[sx][sy]>val+1 ){
        int B[8];
        A[sx][sy]=val+1;
        B[0]=bfs(A,n,sx-2,sy+1,ex,ey,val+1);
        B[1]=bfs(A,n,sx-2,sy-1,ex,ey,val+1);
        B[2]=bfs(A,n,sx+2,sy-1,ex,ey,val+1);
        B[3]=bfs(A,n,sx+2,sy+1,ex,ey,val+1);
        B[4]=bfs(A,n,sx+1,sy-2,ex,ey,val+1);
        B[5]=bfs(A,n,sx+1,sy+2,ex,ey,val+1);
        B[6]=bfs(A,n,sx-1,sy+2,ex,ey,val+1);
        B[7]=bfs(A,n,sx-1,sy-2,ex,ey,val+1);
        sort(B,B+8);
        return B[0];
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[21][21];
	    int sx,sy,ex,ey;
	    cin>>sx;
	    cin>>sy;
	    cin>>ex;
	    cin>>ey;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=n;j++){
	            A[i][j]=INT_MAX;
	        }
	    }
	    int val=0;
	    int res=bfs(A,n,sx,sy,ex,ey,val);
	    if(res==INT_MAX){
	        cout<<-1<<endl;
	    }
	    else {
	        cout<<res-1<<endl;
	    }
	}
	return 0;
}