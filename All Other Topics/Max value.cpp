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
	    int B[n];
	    
	    for(int i=0;i<n;i++){
	        B[i]=(A[i]-i);
	    }
	    
	    int mini=INT_MAX;
	    int maxi=INT_MIN;
	    
	    for(int i=0;i<n;i++){
	        mini=min(mini,B[i]);
	        maxi=max(maxi,B[i]);
	    }
	    
	    cout<<maxi-mini<<endl;
	    
	
	}
	return 0;
}