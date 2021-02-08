#include<bits/stdc++.h>
using namespace std;
int main(){
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
	    priority_queue<pair<int,int>>pq;
	    for(int i=0;i<n;i++){
	        pq.push({A[i],i+1});
	    }
	    
	    while(!pq.empty()){
	        pair<int,int>temp=pq.top();
	        
	       cout<<temp.second<<" ";
	        pq.pop();
	    }
	    cout<<endl;
	
	}
	return 0;
}