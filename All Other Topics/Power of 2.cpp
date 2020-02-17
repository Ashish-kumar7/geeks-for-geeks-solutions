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
	    unsigned long long int n;
	    cin>>n;
	    if(n<=0)
	    {
	        cout<< "NO"<<endl;
	    }
	    else {
	    float yy= log2 (n);
	    if(yy==(int)yy)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	    } 
	   
	}
	return 0;
}