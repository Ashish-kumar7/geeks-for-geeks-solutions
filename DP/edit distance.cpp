#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	int m;
	cin>>m;
	int n;
	cin>>n;
	string str1;
	string str2;
	cin>>str1;
	cin>>str2;
	int dp[m+1][n+1];
	
	for(int i=0;i<=m;i++){
	    for(int j=0;j<=n;j++){
	        if(j==0){
	            dp[i][j]=i;
	        }
	       else if(i==0){
	            dp[i][j]=j;
	        }
	        
	       else if(str2[j-1]==str1[i-1]){
	            dp[i][j]=dp[i-1][j-1];
	        }
	        else if(str2[j-1]!=str1[i-1]){
	            dp[i][j]=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
	        }
	    }
	}
	cout<<dp[m][n]<<endl;
	}
	return 0;
}