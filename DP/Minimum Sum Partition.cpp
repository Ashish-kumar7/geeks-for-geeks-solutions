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
	int sum=0;
	for(int i=0;i<n;i++){
	    cin>>A[i];
	    sum+=A[i];
	}
	
	int dp[n+1][sum+1];
	for(int i=0;i<=n;i++){
	    dp[i][0]=1;
	}
	for(int i=0;i<=sum;i++){
	    dp[0][i]=0;
	}
	dp[0][0]=1;
	
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=sum;j++){
	        if(A[i-1]<=j){
	            dp[i][j]=dp[i-1][j-A[i-1]] || dp[i-1][j] ;
	        }
	        else {
	            dp[i][j]=dp[i-1][j];
	        }
	    }
	}
	vector<int>B;
	
	for(int i=0;i<=sum;i++){
	    if(dp[n][i]==1){
	        B.push_back(i);
	    }
	}
	int min=INT_MAX;

	for(int i=0;i<B.size();i++){
	    if(sum-(2*B[i])>=0 && (sum-(2*B[i]) ) <min   ){
	        min=sum-(2*B[i]);
	        
	    }
	}
	cout<<min<<endl;
	}
	return 0;
}