#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    map<string,int>mp;
	    for(int i=0;i<n;i++){
	        mp[A[i]]++;
	    }
	    string S=" ";
	    int maxi=INT_MIN;
	  for(auto it=mp.begin();it!=mp.end();it++){
	      if(maxi<it->second){
	          maxi=it->second;
	          S=it->first;
	      }
	  }
	    cout<<S<<" "<<maxi<<endl;
	}
	return 0;
}