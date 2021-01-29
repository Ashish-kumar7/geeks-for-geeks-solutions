#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>m;
	    cin>>n;
	    string s1;
	    string s2;
	    cin>>s1;
	    cin>>s2;
	    
	    int dp[m+1][n+1];
	    
	    for(int i=0;i<=n;i++){
	        dp[0][i]=0;
	    }
	    
	    for(int i=0;i<=m;i++){
	        dp[i][0]=1;
	    }
	    
	    for(int i=1;i<=m;i++){
	        for(int j=1;j<=n;j++){
	            
	            if(s1[i-1]==s2[j-1]){
	                dp[i][j]=dp[i-1][j-1] + dp[i-1][j] ;
	            }
	            else {
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	     cout<<dp[m][n]<<endl;
	    
	
	}
	return 0;
}