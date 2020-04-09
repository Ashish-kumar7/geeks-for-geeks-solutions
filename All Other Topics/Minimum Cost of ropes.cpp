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
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	   priority_queue <int, vector<int>, greater<int>> q;
	   
	   for(int i=0;i<n;i++){
	       q.push(A[i]);
	   }
	   
	   long long int sum=0;
	   int t1;
	   int t2;
	   while(q.size()!=1)
	   {
	       t1=q.top();
	       q.pop();
	       t2=q.top();
	       q.pop();
	       sum+=(t1+t2);
	       q.push(t1+t2);
	   }
	    
	    cout<<sum<<endl;
	}
	return 0;
}