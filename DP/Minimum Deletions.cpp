#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    string str=s;
	    reverse(str.begin(),str.end());
	  //  cout<<str<<endl;
	    int l=s.length();
	    int dp[l+1][l+1];
	    for(int i=0;i<=l;i++){
	        for(int j=0;j<=l;j++){
	            if(i==0 || j==0){
	                dp[i][j]=0;
	            }
	            else if(s[i-1]==str[j-1]){
	                dp[i][j]=dp[i-1][j-1] + 1;
	            }
	            else {
	                dp[i][j]=max(dp[i-1][j] , dp[i][j-1] );
	            }
	        }
	    }
	    int len=dp[l][l];
	    cout<<l-len<<endl;
	}
	return 0;
}