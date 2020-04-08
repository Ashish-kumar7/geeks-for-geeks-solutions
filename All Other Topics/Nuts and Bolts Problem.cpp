#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char A[n];
	    char B[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>B[i];
	    }
	    sort(A,A+n);
	    sort(B,B+n);
	    for(int i=0;i<n;i++){
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	    for(int i=0;i<n;i++){
	        cout<<B[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}