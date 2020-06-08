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
	    int count=0;
	    sort(A,A+n);
	    for(int i=0;i<n;i++){
	        if(A[i+1]!=A[i]+1){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}