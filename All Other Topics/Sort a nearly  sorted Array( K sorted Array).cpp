#include<bits/stdc++.h>
using namespace std;
int main(){
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
	    
	    vector<int>B;
	    priority_queue<int,vector<int>,greater<int>>q;
	    
	    for(int i=0;i<n;i++){
	        q.push(A[i]);
	        if(q.size()>k){
	            int x=q.top();
	            q.pop();
	            B.push_back(x);
	        }
	    }
	    
	    while(!q.empty()){
	        B.push_back(q.top());
	        q.pop();
	    }
	    
	    for(int i=0;i<n;i++){
	        cout<<B[i]<<" ";
	    }
	    cout<<endl;
	
	}
	return 0;
}