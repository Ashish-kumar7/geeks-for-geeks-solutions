#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int A[n][m];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>A[i][j];
	        }
	    }
	    int B[n+1][m+1];
	    int max=INT_MIN;
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=m;j++){
	            if(i==0 || j==0){
	                B[i][j]=0;
	            }
	            else if(A[i-1][j-1]==0){
	                B[i][j]=0;
	            }
	            else if(A[i-1][j-1]==1){
	                B[i][j]=min( B[i-1][j-1] , min( B[i-1][j], B[i][j-1]) ) +1;
	            }
	            
	            if(max<B[i][j]){
	                max=B[i][j];
	            }
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}