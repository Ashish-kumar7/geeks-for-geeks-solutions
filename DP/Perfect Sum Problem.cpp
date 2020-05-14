#include<bits/stdc++.h>
using namespace std;


long long int mod =1000000007;

long long int partition(int sum,int A[],int n){
    sort(A,A+n);
   long long int dp[n+1][sum+1]={0};
    for(int j=0;j<=sum;j++){
            dp[0][j]=0;
        }
    for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(j<A[i-1]){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=( (dp[i-1][j-A[i-1]])%mod + (dp[i-1][j])%mod ) % mod;
            }
            }
    }
        return dp[n][sum];
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    int sum1;
	    cin>>sum1;
	 cout<<partition(sum1,A,n)<<endl;
	}
	return 0;
}