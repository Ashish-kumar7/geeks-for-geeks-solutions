#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	
	int val[n+1];
	val[0]=0;
	
	for(int i=1;i<=n;i++){
	    int max_val=INT_MIN;
	    for(int j=0;j<i;j++){
	      max_val=max(max_val,A[j]+val[i-j-1]); 
	    }
	    val[i]=max_val;
	    
	}
	
cout<<val[n]<<endl; 
	    
	}
	return 0;
}