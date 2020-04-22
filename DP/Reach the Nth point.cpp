#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    unsigned long long int dp[a+1];
	    dp[0]=1;
	    dp[1]=1;
	    for(int i=2;i<=a;i++){
	       dp[i]=dp[i-1]+dp[i-2];
	    }
	    cout<<dp[a]<<endl;
	}
	return 0;
}