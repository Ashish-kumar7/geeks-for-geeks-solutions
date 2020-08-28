#include<bits/stdc++.h>
using namespace std;
int main(){
	int dp[1000];
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<1001;i++){
	    dp[i]=(dp[i-1] % 1000000007 + dp[i-2]%1000000007)%1000000007 ;
	}
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<dp[n-1]<<endl;
	}
	return 0;
}