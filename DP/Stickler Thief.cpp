#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    int dp[n+1];
	    dp[0]=A[0];
	    dp[1]=max(A[0],A[1]);
	    if(n>=2){
    	    for(int i=2;i<n;i++){
    	        dp[i]=max(A[i] , max(A[i]+dp[i-2] , dp[i-1]));
    	    }
	    }
	    cout<<dp[n-1]<<endl;
	}
	return 0;
}