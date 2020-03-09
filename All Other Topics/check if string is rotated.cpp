#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	string a;
	string b;
	cin>>a;
	cin>>b;
	
	if(a.length()!=b.length())
	{
	    cout<< 0<<endl;
	    continue;
	}

	int l=b.length();
	
	string clockwise="";
	string anticlockwise="";
	
	clockwise= clockwise + b.substr(2,l-2)+b.substr(0,2);
	anticlockwise=anticlockwise +b.substr(l-2,2)+b.substr(0,l-2);

	
	if(a.compare(clockwise)==0 || a.compare(anticlockwise)==0)
	{
	    cout<<1<<endl;
	}
	
	else 
	{
	    cout<<0<<endl;
	}
	
	}
	return 0;
}