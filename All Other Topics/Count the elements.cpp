#include<bits/stdc++.h>
using namespace std;

int solve(int B[],int start,int end,int val){
    while(start<=end){
        int mid=start+end;
        mid=mid/2;
        if(B[mid]<=val){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return end;
}

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    int B[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>B[i];
	    }
	    
	    sort(B,B+n);
	    
	    int q;
	    cin>>q;
	    
	    while(q--){
	            int p;
	            cin>>p;
	            int x=solve(B,0,n-1,A[p]);
	            cout<<x+1<<endl;
	         
	        
	    }

	}
	return 0;
}