#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	
	int n,k;
	cin>>n;
	cin>>k;
	int v[n];
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	}
	sort(v,v+n);
	
        int var = 0;
	    int mn = INT_MAX;
	    int cnt = 0;
	    for(int i=0;i<n;i++){
	        cnt = var;
	        for(int j=i+1;j<n;j++){
	            if(v[j]-v[i]>k){
	                cnt += v[j]-v[i]-k;
	            }
	        }
	        mn = min(mn,cnt);
	        var += v[i];
	    }
	    cout<<mn<<endl;
	}
	return 0;
}