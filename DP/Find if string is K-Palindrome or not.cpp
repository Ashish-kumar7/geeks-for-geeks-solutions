#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    cin>>k;
	    string A;
	    cin>>A;
	    
	    int dp[n+1][n+1];
	    string str=A;
	    reverse(str.begin(),str.end());
	    
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=n;j++){
	            if(i==0 || j==0){
	                dp[i][j]=0;
	            }
	            
	            else if(A[i-1]==str[j-1]){
	                dp[i][j]=dp[i-1][j-1]+1;
	            }
	            else {
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	            }
	        }
	    }
	    int x=dp[n][n];
	    int y=n-x;
	    if(y<=k){
	        cout<< 1<<endl;
	    }
	    else {
	        cout<<0<<endl;
	    }
	}
	return 0;
}