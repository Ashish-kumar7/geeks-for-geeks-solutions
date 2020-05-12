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
	   long long  int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    long long int flag=0;
	    long long int val;
	    unordered_map<long long int,long long int>mp;
	    for(int i=0;i<n;i++){
	        mp[A[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        if(mp[A[i]]==1){
	            flag=1;
	            val=A[i];
	            break;
	        }
	    }
	    if(flag==1){
	        cout<<val<<endl;
	    }
	    else {
	        cout<<0<<endl;
	    }
	}
	return 0;
}