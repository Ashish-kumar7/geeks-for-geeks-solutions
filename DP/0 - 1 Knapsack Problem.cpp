#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int W;
	    cin>>W;
	    
	    int price[n];
	    int weight[n];
	    for(int i=0;i<n;i++){
	        cin>>price[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>weight[i];
	    }
	  int  dp[n+1][W+1];
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=W;j++){
	            if(i==0 || j==0){
	                dp[i][j]=0;
	            }
	            else if(weight[i-1]<=j){
	                dp[i][j]=max( price[i-1] + dp[i-1][j-weight[i-1]]  , dp[i-1][j]  ) ;
	            }
	            else if( weight[i-1]>j) {
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	 cout<<dp[n][W]<<endl;
	}
	return 0;
}