#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,sum;
	    cin>>n;
	    cin>>sum;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        mp[A[i]]++;
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        count+=mp[sum-A[i]];
	        if(sum-A[i]==A[i]){
	            count--;
	        }
	    }
	    cout<<count/2<<endl;
	}
	return 0;
}