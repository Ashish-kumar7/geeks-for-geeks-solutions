#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
        int dp[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=0;
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
                dp[i][i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(i-1==j && s[i]==s[j]){
                    dp[j][i]=1;
                    count++;
            }
            else if(s[i]==s[j] && dp[j+1][i-1]==1){
                dp[j][i]=1;
                count++;
            }
        }
	}
	cout<<count<<endl; 
	}
	return 0;
}