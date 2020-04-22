#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,f,g,h,count=0,day;
	    cin>>a>>b;
	    for(int i=a;i<=b;i++)
	    {
	        f=(i-1)/400;
	        g=(i-1)/4;
	        h=(i-1)/100;
	        day=(1+i+f+g-h)%7;
	        if(day==1)
	        count++;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
