#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n ;
	    cin>>n;
	    long long int A[n+1];
	    A[0]=2;
	    A[1]=1;
	    for(int i=2;i<=n;i++)
	    {
	        long long int p=A[i-1]%1000000007;
	        long long  int q=A[i-2]%1000000007;
	        long long int kk=(p+q) % 1000000007;
	        
	        A[i]=kk;
	    }
	    	cout<<A[n]<<endl;

	}
	
	
	return 0;
}