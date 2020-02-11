#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n;
	    cin>>m;
	    int A[n];
	    int B[m];
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>B[i];
	    }
	    
	    int sum1=0;
	    int sum2=0;
	    int ans=0;
	        int i=0;
	        int j=0;
	        while(i<n && j<m)
	        {
	            if(A[i]<B[j])
	            {
	               sum1=sum1+A[i];
	               i++;
	            }
	            if(A[i]>B[j])
	            {
	                sum2=sum2+B[j];
	                j++;
	            }
	            if(A[i]==B[j])
	            {
	                sum1=sum1+A[i];
	                sum2=sum2+B[j];
	                if(A[i+1]!=B[j] && B[j+1]!=A[i])
	                {
	                    i++;
	                    j++;  
	                }
	                
	                else if(A[i+1]==B[j])
	                {
	                    i++;
	                }
	                 else if( B[j+1]==A[i])
	                {
	                    j++;
	                }
	                
	                if(sum1>=sum2)
	                {
	                    ans=ans+sum1;
	                    sum1=0;
	                    sum2=0;
	                }
	                if(sum2>sum1)
	                {
	                    ans=ans+sum2;
	                     sum1=0;
	                    sum2=0;
	                }
	            }
	        }
	   	        while(j<m)
	        {
	            sum2=sum2+B[j];
	            j++;
	        }
	        
	        while(i<n)
	        {
	            sum1=sum1+A[i];
	            i++;
	       }
	        if(sum1>sum2)
	        {
	            ans+=sum1;
	        }
	       else 
	       {
	           ans+=sum2;
	       }
	    
	    
	    
	    cout<<ans<<endl;
	    
	    
	}
	
	return 0;
}