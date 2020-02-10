#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int  t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>A;
	    while(n!=0)
	    {
	        if(n>=2000)
	        {
	            n=n-2000;
	            A.push_back(2000);
	        }
	        else if(n>=500)
	        {
	            n=n-500;
	            A.push_back(500);
	        }
	        else if(n>=200)
	        {
	            n=n-200;
	            A.push_back(200);
	        }
	        else if(n>=100)
	        {
	            n=n-100;
	            A.push_back(100);
	        }
	        else if(n>=50)
	        {
	            n=n-50;
	            A.push_back(50);
	        }
	        else if(n>=20)
	        {
	            n=n-20;
	            A.push_back(20);
	        }
	        else if(n>=10)
	        {
	            n=n-10;
	            A.push_back(10);
	        }
	        else if(n>=5)
	        {
	            n=n-5;
	            A.push_back(5);
	        }
	        else if(n>=2)
	        {
	            n=n-2;
	            A.push_back(2);
	        }
	        else if(n>=1)
	        {
	            n=n-1;
	            A.push_back(1);
	        }
	        
	    }
	    for(int j=0;j<A.size();j++)
	    {
	        cout<<A[j]<<" ";
	    }
	    cout<<endl;
	    
	}
	
	
	return 0;
}