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
	    for(int i=n-1;i>=0;i--){
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	
	}
	return 0;
}