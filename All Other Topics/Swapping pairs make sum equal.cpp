#include<bits/stdc++.h>
using namespace std;
int m,n;
int finding(int A[],int B[],int sum1,int sum2){
	    int diff=abs(sum1-sum2);
	    if(diff%2!=0){
	        return -1;
	    }
	     diff=diff/2;
	    map<int,int>mp;
	    for(int i=0;i<m;i++){
	        mp[A[i]+diff]++;
	    }
	    for(int i=0;i<n;i++){
	        if(mp.find(B[i])!=mp.end()){
	            return 1;
	        }
	    }
	    return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    cin>>m;
	    cin>>n;
	    int A[m];
	    int B[n];
	    int sum1=0;
	    for(int i=0;i<m;i++){
	        cin>>A[i];
	        sum1+=A[i];
	    }
	    int sum2=0;
	    for(int j=0;j<n;j++){
	        cin>>B[j];
	        sum2+=B[j];
	    }
	    int hh=finding(A,B,sum1,sum2);
	    cout<<hh<<endl;
	}
	return 0;
}