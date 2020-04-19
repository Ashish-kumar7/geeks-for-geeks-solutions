#include<iostream>
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
	    int a;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            
	            cin>>a;
	            A[i][j]=a;
	        }
	    }
	    int B[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            B[i][j]=A[j][n-1-i];
	        }
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cout<<B[i][j]<<" ";
	        }
	       // cout<<endl;
	    }
	    cout<<endl;
	}
	return 0;
}