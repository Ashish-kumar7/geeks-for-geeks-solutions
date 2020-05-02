#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int A[m][n];
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            if(i==0 || j==0){
	                A[i][j]=1;
	            }
	            else {
	                A[i][j]=( (A[i-1][j])%1000000007 + (A[i][j-1])%1000000007) %1000000007;
	            }
	        }
	    }
	    cout<<A[m-1][n-1]<<endl;
	}
	return 0;
}