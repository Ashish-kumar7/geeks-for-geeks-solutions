#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	string a;
	string b;
	cin>>a;
	cin>>b;
	
	int A[26];
	   
	for(int i=0;i<26;i++)
	{
	     A[i]=0;
	}
	int n=26;
	for(int i=0;i<n;i++)
	{
	    A[a[i]-'a']+=1;
	}
	for(int i=0;i<n;i++)
	{
	    A[b[i]-'a']-=1;
	}
	int count=0;
	
	for(int i=0;i<n;i++){
	    if(A[i]!=0){
	        count++;
	    }
	}
	
	if(count!=0)
	{
	    cout<<"NO"<<endl;
	}
	else {
		cout<<"YES"<<endl;    
	}
	}
	return 0;
}