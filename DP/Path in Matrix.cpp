#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>A[i][j];
	        }
	    }
	    int B[n+1][n+2];
	    int min_sum=INT_MIN;
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=n+1;j++){
	            if(i==0 || j==0){
	                B[i][j]=0;
	            }
	            else if(j==n+1){
	                B[i][j]=0;
	            }
	            else {
	                B[i][j]=max(B[i-1][j] , max(B[i-1][j-1] , B[i-1][j+1] ) ) + A[i-1][j-1];
	            }
	            
	            if(B[i][j]>min_sum){
	                min_sum=B[i][j];
	            }
	        }
	    }
	    cout<<min_sum<<endl;
	}
	return 0;
}