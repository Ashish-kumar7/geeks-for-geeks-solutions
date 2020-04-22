#include<bits/stdc++.h>
using namespace std;
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
            return b;
        }
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a,b;
	    cin>>a;
	    cin>>b;
	    long long int dp[n+1];
	    dp[0]=0;
	    dp[1]=a;
	    for(int i=2;i<=n;i++){
	        if(i%2==0){
	            dp[i]=min(dp[i-1]+a,dp[i/2]+b);
	        }
	        else{
	            dp[i]=min ( dp[i-1]+a , min ( (dp[i/2] +b+a) , (dp[(i+1)/2] +a+b ) ) );
	        }
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}