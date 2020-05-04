#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m;
	    cin>>m;
	    int coin[m+1];
	    coin[0]=0;
	    for(int i=1;i<=m;i++){
	        cin>>coin[i];
	    }
	    int yy=m+1;
	    sort(coin,coin+yy);
	    int sum;
	    cin>>sum;
	    int A[m+1][sum+1];
	    for(int i=0;i<=m;i++){
	      for(int j=0;j<=sum;j++){
	          if(j==0 && i==0 ){
	              A[i][j]=1;
	          }
	          else if(i==0){
	              A[i][j]=0;
	          }
	          else if(j==0){
	              A[i][j]=1;
	          }
	          else if(j>=coin[i]){
	              A[i][j]=A[i-1][j] + A[i][j-coin[i]];
	          }
	          else{
	              A[i][j]=A[i-1][j];
	          }
	      }
	    }
	    cout<<A[m][sum]<<endl;
	}
	return 0;
}