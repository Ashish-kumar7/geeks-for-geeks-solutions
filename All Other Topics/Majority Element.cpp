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
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
	map<int,int>mp;
	int val;
	int key;
	for(int i=0;i<n;i++){
	    key=A[i];
	    mp[key]++;
	}
	map<int,int> :: iterator it;
	it=mp.begin();
	int kk=-100;
	int pp;
	for(it=mp.begin();it!=mp.end();it++){
	    if(kk<it->second){
	        kk=it->second;
	         pp=it->first;
	    }
	}
	int ll=n/2;
	if(kk>ll){
	cout<<pp<<endl;
	}
	else {
	    cout<<-1<<endl;
	}
	}
	return 0;
}