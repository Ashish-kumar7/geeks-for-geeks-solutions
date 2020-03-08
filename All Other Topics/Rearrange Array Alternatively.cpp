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
	
	int A[n];
	for(int i=0;i<n;i++)
	{
	    cin>>A[i];
	}
	int C[n];
	int j=0;
	int l=0;
	for(int i=0;i<n;i++)
	{
	    if(i%2==0)
	    {
	        C[i]=A[n-j-1];
	        j++;
	    }
	    else 
	    {
	        C[i]=A[l];
	        l++;
	        
	    }
	}
	
	for(int k=0;k<n;k++)
	{
	    cout<<C[k]<<" ";
	}
	cout<<endl;
	
	}
	return 0;
}