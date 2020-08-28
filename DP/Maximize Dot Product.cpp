#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
	   long long  int m,n;
	    cin>>m;
	    cin>>n;
	   long long  int A[m];
	    long long int B[n];
	    for(int i=0;i<m;i++){
	        cin>>A[i];
	    }
	    for(int j=0;j<n;j++){
	        cin>>B[j];
	    }
         long long int dp[n+1][m+1];
	    memset(dp, 0, sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=i;j<=m;j++){
                dp[i][j]=max(dp[i-1][j-1] + (A[j-1]*B[i-1] ) ,  dp[i][j-1]);
        }
    }
	    cout<<dp[n][m]<<endl;
	}
	return 0;
}