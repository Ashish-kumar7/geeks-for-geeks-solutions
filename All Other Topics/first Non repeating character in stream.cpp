#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<char>A(n);
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
	int B[26];
	for(int i=0;i<26;i++){
	    B[i]=0;
	}
	queue<char>q;
	for(int i=0;i<n;i++){
	    B[A[i]-'a']++;
	    q.push(A[i]);
	    while(!q.empty()){
	        if(B[q.front()-'a']>1){
	            q.pop();
	        }
	        else{
	            cout<<q.front()<<" ";
	            break;
	        }
	    }
	    if(q.empty()){
	        cout<<-1<<" ";
	    }
	}
	cout<<endl; 
	}
	return 0;
}