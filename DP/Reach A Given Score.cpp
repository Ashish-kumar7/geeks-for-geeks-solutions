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
	    int n;
	    cin>>n;
	    int A[n+1];
	    for(int i=0;i<=n;i++)
	    {
	        A[i]=0;
	    }
	    A[0]=1;
	    for(int i=3;i<=n;i++)
	    {
	        A[i]=A[i]+A[i-3];
	    }
	    for(int i=5;i<=n;i++)
	    {
	        A[i]=A[i]+A[i-5];
	    }
	    for(int i=10;i<=n;i++)
	    {
	        A[i]=A[i]+A[i-10];
	    }
	    cout<<A[n]<<endl;
	}
	return 0;
}