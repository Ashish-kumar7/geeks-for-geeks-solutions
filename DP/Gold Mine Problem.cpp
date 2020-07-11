#include<bits/stdc++.h>
using namespace std;

int maxam(int a,int b,int c){
    if(a>=b && a>=c) {
         return a;
    }
    else if(b>=c && b >=a) {
        return b;
    }
        else return c;
}
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n;
	    cin>>m;
	    int A[n+1][m+1];
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=m;j++){
	            cin>>A[i][j];
	        }
	    }
	     for(int i=0;i<=n;i++){
	        for(int j=0;j<=m;j++){
	           if(i==0 || j==0){
	               A[i][j]=0;
	           }
	        }
	     }
	    int B[n+1][m+1];
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=m;j++){
	            if(i==0 || j==0){
	                B[i][j]=0;
	            }
	        }
	    }
	    for(int j=1;j<=m;j++){
	        for(int i=1;i<=n;i++){
	            if(i+1 <= n){
	                B[i][j]=maxam (B[i][j-1], B[i-1][j-1] , B[i+1][j-1] ) + A[i][j];
	            }
	            else {
	                B[i][j]=max (B[i][j-1], B[i-1][j-1] ) + A[i][j];
	            }
	        }
	    }
	    int max=INT_MIN;
	    for(int j=0;j<=n;j++){
	        if(max< B[j][m]){
	            max=B[j][m];
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}