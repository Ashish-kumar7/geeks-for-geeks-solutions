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
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    int B[n+1];
	    for(int i=1;i<=n;i++){
	        B[i]=0;
	    }
	    for(int i=0;i<n;i++){
	        B[A[i]]++;
	    }
	    for(int i=1;i<=n;i++){
	        cout<<B[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}