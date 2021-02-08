#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,n;
	    cin>>a>>b>>c>>n;
	    int dp[n];
	    dp[0]=a;
	    dp[1]=b;
	    dp[2]=c;
	    for(int i=3;i<n;i++){
	        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	    }
	    cout<<dp[n-1]<<endl;
	}
	return 0;
}