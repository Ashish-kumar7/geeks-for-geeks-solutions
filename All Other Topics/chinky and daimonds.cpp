#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    
	    priority_queue<int>pq;
	    for(int i=0;i<n;i++){
	        pq.push(A[i]);
	    }
	    int ans=0;
	    while(k--){
	        int a=pq.top();
	        pq.pop();
	        pq.push(a/2);
	        ans+=a;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}