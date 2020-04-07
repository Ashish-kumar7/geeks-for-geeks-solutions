#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
	stack<int>S;
	S.push(0);
	vector<int>B;
	for(int i=0;i<n;i++){
	    while(!S.empty() &&  A[S.top()]  <= A[i]){
	        S.pop();
	    }
	    if(S.empty()){
	        B.push_back(i+1);
	    }
	    else {
	        B.push_back(i-S.top());
	    }
	    S.push(i);
	}
	for(int j=0;j<n;j++){
	    cout<<B[j]<<" ";
	}
	cout<<endl;
	}
	return 0;
}