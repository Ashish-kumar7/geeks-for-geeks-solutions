#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	int b;
	cin>>b;
	if(b%2==0)
	{
	    b=b/2;
	    b=b-1;
	    int sum=(b)*(b+1);
	    sum=sum/2;
	    cout<<sum<<endl;
	}
	else
	{
	    b=b-1;
	    b=b/2;
	    b=b-1;
	    int sum=(b)*(b+1);
	    sum=sum/2;
	    cout<<sum<<endl;
	}
	}
	return 0;
}