#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	long long int dp[101][1001];
	
	for(int i=0;i<101;i++){
	    for(int j=0;j<1001;j++){
	            dp[i][j]=0;
	    }
	}
	for(int i=1;i<=9;i++){
	    dp[1][i] = 1;
	}
	
	    for(int i=2;i<=100;i++){
	        for(int j=1;j<=1000;j++){
	            for(int k=0;k<=9;k++){
	                if(j>=k)
	                dp[i][j]= ( dp[i][j]%1000000007+dp[i-1][j-k]%1000000007 ) %1000000007;
	            }
	        }
	    }
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int sum;
	    cin>>n;
	    cin>>sum;
	    if(dp[n][sum]!=0)
	    cout<<dp[n][sum]<<endl;
	    else {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}