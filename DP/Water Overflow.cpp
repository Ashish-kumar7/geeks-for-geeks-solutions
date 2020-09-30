#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	
	   double k;
	    int i,j;
	    cin>>k;
	    cin>>i;
	    cin>>j;
        if(j>i){
            cout<<0<<endl;
            continue;
        }
       double dp[ (i)*(i+1) / 2 ];
       
       memset(dp, 0, sizeof(dp));
        
        dp[0]=k;
        
        int index=0;
        
        for(int row=1;row<=i;row++){
            for(int col=1;col<=row;col++){
                k=dp[index];
                
                if(k>=1){
                    dp[index]=1;
                }
                else{
                    dp[index]=k;
                }
                
                
                if(k>1){
                    k=k-1;
                }
                else {
                    k=0;
                }
                
                dp[row+index]+=k/2;
                dp[row+1+index]+=k/2;
                
                
                index++;
            }
        }
	cout << fixed << setprecision(5)<<dp[ (i*(i-1)/2) + j -1 ]<<endl;
	}
	return 0;
}