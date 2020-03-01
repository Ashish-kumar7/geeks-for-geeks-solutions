#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
    int A[n+1];
    
    for(int k=0;k<=n;k++){
        A[k]=0;
    }
    A[0]=1;
    
	for(int i=1;i<=n;i++){
	    A[i]=A[i]+A[i-1];
	}
	for(int i=2;i<=n;i++){
	    A[i]=A[i]+A[i-2];
	}
	
	cout<<A[n]<<endl;
	
	}
	return 0;
}