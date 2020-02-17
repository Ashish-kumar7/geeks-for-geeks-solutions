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
	    int f=floor(log2 (n)) ;
	    
	    cout<<(1<<f)<<endl;
	}
	
	
	return 0;
}