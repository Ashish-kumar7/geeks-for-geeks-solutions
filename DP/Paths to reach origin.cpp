#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m;
	    cin>>n;
	    int A[m+1][n+1];
	    for(int i=m;i>=0;i--){
	        A[i][n]=1;
	    }
	    for(int i=n;i>=0;i--){
	        A[m][i]=1;
	    }
	    for(int i=m-1;i>=0;i--){
	        for(int j=n-1;j>=0;j--){
	         A[i][j]=A[i+1][j]+A[i][j+1];   
	        }
	    }
	cout<<A[0][0]<<endl;
	}
	return 0;
}