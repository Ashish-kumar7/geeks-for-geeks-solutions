#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	unsigned long long int t;
	cin>>t;
	while(t--){
	   unsigned long long int m,n;
	    cin>>m;
	    cin>>n;
	    unsigned long long int A[m];
	   unsigned long long int B[n];
	    for(int i=0;i<m;i++){
	        cin>>A[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>B[i];
	    }
	    map<unsigned long long int,unsigned long long int>mp;
	    for(int i=0;i<n;i++){
	        mp[B[i]]++;
	    }
	    
	    for(int i=0;i<m;i++){
	        if(mp.find(A[i])==mp.end()){
	            cout<<A[i]<<" ";
	        }
	    }
	    cout<<endl;
	    
	}
	return 0;
}