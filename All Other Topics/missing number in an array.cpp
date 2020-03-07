#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    int sum=0;
	     for(int i=0;i<n-1;i++)
	     {
	         cin>>A[i];
	         sum=sum+A[i];
	     }
	     int s=n*(n+1)/2;
	     cout<<s-sum<<endl;
	}
	return 0;
}