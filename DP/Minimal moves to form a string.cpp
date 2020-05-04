#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.length();
	    int dp[n];
	    dp[0]=1;
	    string s1="";
	    string s2="";
	    s1=s1+s[0];
	     for(int i=1;i<n;i++){
	        dp[i]=INT_MAX;
	     }
	    for(int i=1;i<n;i++){
	        s1=s1+s[i];
	        
	        dp[i]=min(dp[i],dp[i-1]+1);
	        
	        s2=s.substr(i+1,i+1);
	        
	        if(s2==s1){
	            dp[i*2 + 1]=min( dp[i * 2 +1], dp[i]+1 );
	        }
	    }
	    cout<<dp[n-1]<<endl;
	}
	return 0;
}