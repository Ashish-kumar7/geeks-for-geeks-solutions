
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
	    int k;
	    cin>>k;
	    int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    sort(A,A+n);
	    int count=0;
	    int i=0;
	    while(A[i]<=k)
	    {
	        k=k-A[i];
	        count++;
	        i++;
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}
