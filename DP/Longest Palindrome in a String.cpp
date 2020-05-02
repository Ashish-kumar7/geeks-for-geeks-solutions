#include<bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
            char str[101];
            cin>>str;
            int n=strlen(str);
            int dp[n][n]={0};
            for(int i=0;i<n;i++){
                dp[i][i]=1;
            }
            int start=0,flag=0,maxLen=1;
            
            for(int i=0;i<n-1;i++){
                if(str[i]==str[i+1]){
                    dp[i][i+1]=1;
                    if(start==0 && flag==0){
                        start=i;
                        flag=1;
                        maxLen=2;
                    }
                }
            }
            int len;
            for(len=3;len<=n;len++){
                for(int i=0;i<n-len+1;i++){
                    int j=i+len-1;
                    if(str[i]==str[j] && dp[i+1][j-1]){
                        if(maxLen<len){
                            start=i;
                            maxLen=len;
                        }
                        dp[i][j]=1;
                    }
                }
            }
            for(int i=0;i<maxLen;i++)
                cout<<str[i+start];
            cout<<endl;
        }
	return 0;
}