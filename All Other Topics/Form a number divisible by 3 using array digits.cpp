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
	    
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=A[i];
	    }
	    
	    if(sum%3==0){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	
	
	}
	return 0;
}