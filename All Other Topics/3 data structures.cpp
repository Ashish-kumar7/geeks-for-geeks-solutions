#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    priority_queue<int>pq;
	    queue<int>q;
	    stack<int>st;
	    
	    while(n--){
	        int a,b;
	        cin>>a;
	        cin>>b;
	        if(a==1){
	            pq.push(b);
	        }
	        else if(a==2){
	            q.push(b);
	        }
	        else if(a==3){
	            st.push(b);
	        }
	    }
	    
	    while(!pq.empty()){
	        cout<<pq.top()<<" ";
	        pq.pop();
	    }
	    while(!q.empty()){
	        cout<<q.front()<<" ";
	        q.pop();
	    }
	    while(!st.empty()){
	        cout<<st.top()<<" ";
	        st.pop();
	    }
	    cout<<endl;
	
	}
	return 0;
}