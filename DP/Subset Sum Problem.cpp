#include<bits/stdc++.h>
using namespace std;

int dp[101][100001]={0};


int partition(int sum,int A[],int n){
    sort(A,A+n);
   
    for(int j=0;j<=sum;j++){
            dp[0][j]=0;
        }
    for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(j<A[i-1]){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j-A[i-1]] || dp[i-1][j];
            }
            }
        }
        return dp[n][sum];
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        sum+=A[i];
	    }
	    if(sum%2!=0){
	        cout<<"NO"<<endl;
	        continue;
	    }
	    sum=sum/2;
	 int xx=partition(sum,A,n);
	 if(xx==1){
	     cout<<"YES"<<endl;
	 }
	 else {
	     cout<<"NO"<<endl;
	 }
	}
	return 0;
}