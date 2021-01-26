#include<bits/stdc++.h>
using namespace std;
int main(){
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
	   for(int k=0;k<n;k++){
	       for(int i=0;i<n;i++){
	           for(int j=0;j<n;j++){
	               A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
	           }
	       }
	   }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(A[i][j]>=10000000){
	                cout<<"INF"<<" ";
	            }
	            else {
	                cout<<A[i][j]<<" ";
	            }
	        }
	        cout<<endl;
	    }
	}
	return 0;
}