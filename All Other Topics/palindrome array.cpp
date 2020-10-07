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
	    for(int i=0,j=n-1;i<j;){
	        if(A[i]==A[j]){
	            i++;
	            j--;
	        }
	        else if(A[i]>A[j]){
	            j--;
	            A[j]+=A[j+1];
	            count++;
	        }
	        else{
	            i++;
	            A[i]+=A[i-1];
	            count++;
	        }
	        
	        
	        
	    }
	    cout<<count<<endl;
	
	}
	return 0;
}