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
	    string S[n];
	    string B[n];
	    for(int i=0;i<n;i++){
	        cin>>S[i];
	        B[i]=S[i];
	    }
	    for(int i=0;i<n;i++){
	        sort(B[i].begin(),B[i].end());
	    }
	    map<string,vector<string>>mp;
	    for(int i=0;i<n;i++){
	        mp[B[i]].push_back(S[i]);
	    }
	    vector<int>AA;
	    for(auto it=mp.begin();it!=mp.end();it++){
	        AA.push_back( it->second.size() );
	    }
	    sort(AA.begin(),AA.end());
	    for(int i=0;i<AA.size();i++){
	        cout<<AA[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}