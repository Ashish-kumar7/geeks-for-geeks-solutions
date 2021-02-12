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
	    sort(A,A+n);
	    
	    int count=0;
	    
	    for(int i=0;i<n;i++){
	        for(int j=i;j<n;j++){
	            if(A[i]<A[j]){
	                count++;
	            }
	        }
	    }
	cout<<count<<endl;
	
	}
	return 0;
}