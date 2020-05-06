#include<bits/stdc++.h>
using namespace std;
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
	map<int,int>mp;
	for(int i=0;i<n;i++){
	    mp[A[i]]++;
	}
	map<int,int> :: iterator it;
	int flag=1;
	for(it=mp.begin();it!=mp.end();it++){
	    if(it->second>n/2){
	        flag=0;
	        cout<<it->first<<endl;
	        break;
	    }
	}
	if(flag==1){
	    cout<<-1<<endl;
	}
	}
	return 0;
}