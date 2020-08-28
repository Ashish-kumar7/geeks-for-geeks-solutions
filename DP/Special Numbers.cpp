#include<bits/stdc++.h>
using namespace std;
int main(){
	int dp[100002];
	dp[0]=0;
	int k=0;
	for(int i=0;i<16667;i++){
	    for(int j=0;j<=5;j++){
	        dp[k]=dp[i]*10 + j ;
	        k++;
	    }
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