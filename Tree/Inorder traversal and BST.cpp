
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    int count=0;
	    for(int j=0;j<n-1;j++)
	    {
	        if(A[j]>=A[j+1])
	        {
	            count++;
	        }
	    }
	    if(count>0)
	    {
	        cout<<0<<endl;
	    }
	    else 
	    {
	        cout<<1<<endl;
	    }
	    
	}
	
	
	
	return 0;
}


