#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    int B[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>B[i];
	    }
	   int dp[n+1];
	   dp[0]=0;
	   dp[1]=A[0];
	   for(int i=2;i<=n;i++){
	       dp[i]=max( (A[i-1]+dp[i-2]) , (B[i-1]+dp[i-1]) );
	   }
	   cout<<dp[n]<<endl;
	}
	return 0;
}