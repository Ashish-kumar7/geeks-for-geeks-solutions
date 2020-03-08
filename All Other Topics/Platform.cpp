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
	int A[n];
	int B[n];
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
	for(int i=0;i<n;i++){
	    cin>>B[i];
	}
	sort(A,A+n);
	sort(B,B+n);
	int i=1;
	int j=0;
	int total_count=1;
	int count=1;
	while(i<n && j<n){
	    if(A[i]<=B[j]){
	        count++;
	        i++;
	        
	        if(total_count<count)
	        {
	            total_count=count;
	        }
	        
	    }
	    else{
	        count--;
	        j++;
	    }
	}
	
	cout<<total_count<<endl;
	
	
	}
	return 0;
}