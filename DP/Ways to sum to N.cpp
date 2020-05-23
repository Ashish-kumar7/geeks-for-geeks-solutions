#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,sum;
	    cin>>n;
	    cin>>sum;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    long long int dp[sum+1];
        for(int i=0;i<=sum;i++){
            dp[i]=0;
        }	    
	    dp[0]=1;
	    for(int i=1;i<=sum;i++){
	        for(int j=0;j<n;j++){
	            if(i>=A[j]){
	                    dp[i]=(dp[i]%mod + dp[i-A[j]] % mod )% mod;
	                }
	            }
	    }
	    cout<<dp[sum]<<endl;
	}
	return 0;
}