#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int A[n];
	    for(int i=0; i<n; i++){
	        cin>>A[i];
	    }
	    int count=0;
	    int sum=0;
	    unordered_map<long long int,long long int>mp;
	    for(int i=0;i<n;i++){
	        sum+=A[i];
	        if(sum==0){
	            count++;
	        }
	        if(mp.find(sum)!=mp.end()){
	            count+=mp[sum];
	        }
	        mp[sum]++;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}