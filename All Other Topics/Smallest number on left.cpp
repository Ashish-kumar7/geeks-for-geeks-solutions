#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
	    cin>>A[i];
	}
	vector<int>B;
	B.push_back(-1);
	stack<int>S;
	S.push(A[0]);
	for(int i=1;i<n;i++)
	{
	    if(A[i]>S.top())
	    {
	        B.push_back(S.top());
	        S.push(A[i]);
	    }
	    else 
	    {
	        while(!S.empty() && S.top()>=A[i])
	        {
	            S.pop();
	        }
	        if(!S.empty())
	        {
	            B.push_back(S.top());
	        }
	        else
	        {
	            B.push_back(-1);
	        }
	        S.push(A[i]);
	    }
	    
	}
	
	for(int j=0;j<B.size();j++)
	{
	    cout<<B[j]<<" ";
	}
	cout<<endl;
	
	}
	return 0;
}