#include<bits/stdc++.h>
using namespace std;
int main(){
	int dp[76];
	for(int n=1;n<=6;n++){
	    dp[n-1]=n;
	}
	int b;
	
	for (int n = 7; n <= 75; n++) { 
        dp[n - 1] = 0; 
        for (b = n - 3; b >= 1; b--) { 
            int curr = (n - b - 1) * dp[b - 1]; 
            if (curr > dp[n - 1]) 
                dp[n - 1] = curr; 
        } 
    } 
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n>75){
	        cout<<-1<<endl;
	      //  continue;
	    }
	    else {
	        cout<<dp[n-1]<<endl;
	    }
	
	}
	return 0;
}