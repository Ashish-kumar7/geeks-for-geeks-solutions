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
	    
	    if(n==1)
	    {
	        cout<<1<<endl;
	    }
	    else if(n==2)
	    {
	        cout<<2<<endl;
	    }
	    else if(n==3)
	    {
	        cout<<4<<endl;
	    }
	    else {
	int A[n];
	A[0]=1;
	A[1]=2;
	A[2]=4;
	for(int i=3;i<n;i++)
	{
	    A[i]=A[i-3]+A[i-2]+A[i-1];
	}
	cout<<A[n-1]<<endl;
	}
	}
	return 0;
}