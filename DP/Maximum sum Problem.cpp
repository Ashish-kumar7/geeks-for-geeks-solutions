#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int dp[n+1];
	    dp[0]=0;
	    for(int i=1;i<=n;i++){
	        dp[i]=max( (dp[i/2] + dp[i/3] + dp[i/4]),i);
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}