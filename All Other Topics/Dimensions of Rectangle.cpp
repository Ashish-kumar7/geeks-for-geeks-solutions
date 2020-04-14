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
	    
	   int count=0;
	    int m=1;
	    
	    while(m<=n)
	    {
	        int temp=n/m;
	        
	        if(temp*m==n)
	        {
	            if(temp%2==0 && m%2==0 && temp!=m)
	             {
	                 
	             }
	             else
	             {  
	                count++;
	             }
	        }
	        m++;
	    }
	    
	    cout<<ceil((float)count/2.0)<<endl;
	}
	return 0;
}