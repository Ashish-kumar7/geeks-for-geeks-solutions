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
	string A[n];
	
	for(int i=0;i<n;i++)
	{
	    cin>>A[i];
	}
	
	sort(A,A+n);
	
	int h=A[0].size();
	int l=A[n-1].size();
	string kk=A[0];
	string jj=A[n-1];
	
	int p=max(h,l);
	
	string me;
	int i=0;
	while(i<p && kk[i]==jj[i]){
	    
	    me+=kk[i];    
	    i++;
	}
	if(me.length()!=0)
	{
	cout<<me<<endl;    
	}
	else 
	{
	    cout<<-1<<endl;
	}
	
	
	
	
	}
	return 0;
}