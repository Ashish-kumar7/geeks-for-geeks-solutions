#include<bits/stdc++.h>
using namespace std;
int mod =1000000007;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>m;
	    cin>>n;
	    cin>>k;
	    long long int dp[m+1][n+1];
	    for(int i=0;i<=m;i++){
	        for(int j=0;j<=n;j++){
	            dp[i][j]=-1;
	        }
	    }
	    int x,y;
	    for(int i=0;i<k;i++){
	        cin>>x;
	        cin>>y;
	       dp[x][y]=0;
	    }
	    for(int i=0;i<=m;i++){
	        for(int j=0;j<=n;j++){
	            if(i==0 || j==0){
	                dp[i][j]=0;
	            }
	             if(i==1 && j==1){
	                dp[i][j]=1;
	            }
	            else if(dp[i][j]!=0){
	                dp[i][j]=( ( dp[i-1][j] % mod ) + ( dp[i][j-1] % mod ) ) % mod ;
	            }
	            
	        }
	    }
	    cout<<dp[m][n]<<endl;
	}
	return 0;
}