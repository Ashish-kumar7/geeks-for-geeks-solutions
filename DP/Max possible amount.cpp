#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
        pair<int, int> dp[n][n];
        for(int i = 0; i < n; ++i){
            dp[i][i].first = a[i];
            dp[i][i].second = 0;
        }
        for(int turn = 2; turn <= n; turn++){
            for(int i = 0; i <= n - turn; ++i){
                
                int j = i + turn - 1;
                
                int pickLeft = a[i] + dp[i+1][j].second;
                int pickRight = a[j] + dp[i][j-1].second;
                
                dp[i][j].first = max(pickLeft, pickRight);
                
                if(dp[i][j].first == pickLeft){
                    dp[i][j].second = dp[i+1][j].first;
                }                    
                else{
                    dp[i][j].second = dp[i][j-1].first;
                }
            }
        }
        cout<<dp[0][n-1].first<<endl;
	}
	return 0;
}