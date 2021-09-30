// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0

#include<bits/stdc++.h>
using namespace std;

int minJumps(vector<int>a, int n){
    
    if(a[0] == 0){
        return -1;
    }
    vector<int> dp(n, INT_MAX);
    
    dp[n-1] = 0;
    for(int i = n-2; i>=0; i--){
        if(a[i]+i >= n-1)
            dp[i] = 1;
        else{
            int minEle = INT_MAX;
            for(int k = i+1; k<n && k<a[i]+i+1; k++)
                minEle = min(minEle, dp[k]);
                
            if(minEle != INT_MAX)
                dp[i] = minEle + 1;
        }
    }
    if(dp[0] == INT_MAX)
        return -1;
    else
        return dp[0];
}
int main(){
	
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int>a(n);
	    for(int i = 0; i<n; i++){
	        cin >> a[i];
	    }
	    cout << minJumps(a, n) << endl;
	}
	return 0;
}
