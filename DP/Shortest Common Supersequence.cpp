#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    string str1,str2;
	    cin>>str1;
	    cin>>str2;
	    int l1=str1.length();
	    int l2=str2.length();
	    int dp[l1+1][l2+1];
	    for(int i=0;i<=l1;i++){
	        for(int j=0;j<=l2;j++){
	            if(i==0 || j==0){
	                dp[i][j]=0;
	            }
	           else if(str1[i-1]==str2[j-1]){
	                dp[i][j]=1+dp[i-1][j-1];
	            }
	            else{
	                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
	            }
	        }
	    }
	    int xx=dp[l1][l2];
	    cout<<l1+l2-xx<<endl;
	}
	return 0;
}