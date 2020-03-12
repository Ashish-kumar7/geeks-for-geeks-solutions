#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n){
    int A[n];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        A[i]=sum;
    }
    map<int,int>mp;
    int key;
    int value=0;
    for(int i=0;i<n;i++){
        key=A[i];
        mp[key]++;
    }
    map<int,int>:: iterator it;
    for(it=mp.begin();it!=mp.end();it++){ 
        if((it->first)==0){
        return 1;
    }
        if((it->second)>1){
        return 1;
        }
    }
    return 0;
}

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
	    cin>>A[i];
	}
	if(subArrayExists(A,n)==0)
	{
	    cout<<"No"<<endl;
	}
	else 
	{
	    cout<<"Yes"<<endl;
	}
	
	
	}
	return 0;
}