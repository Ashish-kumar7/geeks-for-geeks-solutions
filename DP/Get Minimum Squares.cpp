#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int dp[10001];
	dp[0]=0;
	for(int i=1;i<10001;i++){
	    dp[i]=INT_MAX;
	}
	for(int i=1;i<10001;i++){
	    for(int j=1;j*j<=i;j++){
	        dp[i] = min ( dp[i-j*j]+1 , dp[i] );
	    }
	}
	while(t--){
	    int n;
	    cin>>n;
	    cout<<dp[n]<<endl;
	}
	return 0;
}