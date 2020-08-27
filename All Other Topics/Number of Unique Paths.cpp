#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m;
	    cin>>n;
	    int A[m][n];
	    for(int i=0;i<m;i++){
	        A[i][0]=1;
	    }
	    for(int j=0;j<n;j++){
	        A[0][j]=1;
	    }
	    for(int i=1;i<m;i++){
	        for(int j=1;j<n;j++){
	            A[i][j]=A[i-1][j]+A[i][j-1];
	        }
	    }
	    cout<<A[m-1][n-1]<<endl;
	
	}
	return 0;
}