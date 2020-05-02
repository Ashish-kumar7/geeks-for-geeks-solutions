#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n;
	    cin>>m;
	    string X;
	    string Y;
	    cin>>X;
	    cin>>Y;
	    int A[n+1][m+1];
	    for(int i=0;i<=n;i++){
	        A[i][0]=0;
	    }
	    for(int j=0;j<=m;j++){
	        A[0][j]=0;
	    }
	    int val=0;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=m;j++){
	            if(X[i-1]==Y[j-1]){
	                A[i][j]=(A[i-1][j-1]) + 1;
	                if(val<A[i][j]){
	                    val=A[i][j];
	                }
	            }
	            else {
	                A[i][j]=0;
	            }
	        }
	    }
	cout<<val<<endl;
	}
	return 0;
}