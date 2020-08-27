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
	    
	    
	    int i=0;
	    int mark=A[0];
	    int count=0;
	    while(i<n){
	        if(A[i]>=mark){
	            mark=A[i];
	            count++;
	        }
	        i++;
	    } 
	    cout<<count<<endl;
	}
	return 0;
}