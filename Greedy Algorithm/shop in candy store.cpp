#include <iostream>
#include<bits/stdc++.h>
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
	    int m=n;
	    int sum1=0;
	    int sum2=0;
	    int i=0;
	    
	    while(n>0)
	    {
	        sum1=sum1+A[i];
	        n=n-k-1;
	        
	        i++;
	    }
	    int jj=0;
	     sort(A, A+m, greater<int>());
	     while(m>0)
	     {
	         sum2=sum2+A[jj];
	         m=m-k-1;
	         jj++;
	     }
	    cout<<sum1<<" "<<sum2<<endl;
	   	}
	return 0;
}