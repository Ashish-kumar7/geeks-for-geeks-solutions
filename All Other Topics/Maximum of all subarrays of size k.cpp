#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	   int n,k;
	   cin>>n;
	   cin>>k;
	   int A[n];
	   for(int i=0;i<n;i++){
	       cin>>A[i];
	   }
	deque<int>Q;
	int i;
	for( i=0;i<k;i++)
	{
	    while(!Q.empty() && A[i]>A[Q.back()])
	    {
	        Q.pop_back();
	    }
	    Q.push_back(i);
	}
	
	for(;i<n;i++)
	{
	    cout<<A[Q.front()]<<" ";
	    
	    while(!Q.empty() && Q.front()<=i-k)
	    {
	        Q.pop_front();
	   }
	   
	   while(!Q.empty() && A[Q.back()]<=A[i])
	    {
	        Q.pop_back();
	   }
	    
	    Q.push_back(i);
	  }
	  
	cout<<A[Q.front()];
	
	cout<<endl;
	}
	return 0;
}