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
	    int B[n];
	    for(int i=0;i<n;i++){
	        B[i]=A[A[i]];
	    }
	    for(int j=0;j<n;j++){
	        cout<<B[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}