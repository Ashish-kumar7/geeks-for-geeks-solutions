#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	string A;
	cin>>A;
	int n=A.length();
	int count1=0;
	int count2=0;
	for(int i=0;i<n;i+=2)
	{
	    if(A[i]=='1')
	    {
	       count1++;
	    }
	}
	for(int i=1;i<n;i+=2)
	{
	    if(A[i]=='1')
	    {
	        count2++;
	    }
	}
	
	int x=count2-count1;
	if(x%3==0)
	{
	    cout<<1<<endl;
	}
	else 
	{
	    cout<<0<<endl;
	}
	
	}
	return 0;
}