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
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    int sum1=A[0];
	    int sum2=0;
	    
	    int result;
	    for(int i=1;i<n;i++){   
	       if(sum1<sum2){
	            result=sum2;
	        }
	        else{
	            result=sum1;
	         } 
	        sum1=sum2+A[i];
	        sum2=result;
	    }
	    
	    cout<<max(sum1,sum2)<<endl;
	}
	return 0;
}