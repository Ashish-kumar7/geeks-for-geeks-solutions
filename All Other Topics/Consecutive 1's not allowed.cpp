#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
int main(){
	//code
	long long int dp[101];
	dp[0]=1;
	dp[1]=2;
	for(int i=2;i<101;i++){
	    dp[i]=( dp[i-1]%mod + dp[i-2]%mod )% mod;
	}
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<dp[n]<<endl;
	}
	return 0;
}