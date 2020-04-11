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
	    int count=0;
	    for(int i=0;i<n-1;i++){
	        if(A[i+1]==A[i]+1){
	            count++;
	            while(i<n-1 && A[i]==A[i+1]-1){
	                i++;
	            }
	        }
	        }
	        cout<<count<<endl;
	}
	return 0;
}