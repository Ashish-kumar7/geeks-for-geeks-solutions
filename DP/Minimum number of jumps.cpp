#include<bits/stdc++.h>
using namespace std;
int jumping(int A[],int n){
    if(n==0 || A[0]==0){
        return -1;
    }
    int jump[n];
	    jump[0]=0;
	    for(int i=1;i<n;i++){
	        jump[i]=INT_MAX;
	        for(int j=0;j<i;j++){
	            if(i<=j+A[j]){
	               jump[i]=min(jump[i],jump[j]+1);
	                }
	        }
	    }
	    if(jump[n-1]==INT_MAX){
	        return -1;
	    }
	    else{
	        return jump[n-1];
	    }
}
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
	   int l=jumping(A,n);
	   cout<<l<<endl;
	}
	return 0;
}