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
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	        cin>>A[i][j];
	        }
	    }
	    int x=2*n -1 ;
	    
	    vector<vector<int>>B(x);
	    
	     for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            B[i+j].push_back(A[i][j]);
	        }
	    }
	    
	    for(int i=0;i<x;i++){
	        for(int j=0;j<B[i].size();j++){
	            cout<<B[i][j]<<" ";
	        }
	    }
	    
	    cout<<endl;
	    
	}
	return 0;
}