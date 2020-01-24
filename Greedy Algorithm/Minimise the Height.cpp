#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	      cin>>A[i];  
	    }
	    sort(A,A+n);
	    int big=A[n-1]-k;
	    int small=A[0]+k;
	    int ans =A[n-1]-A[0];
	    if(small>big){
	        int temp=small;
	        small=big;
	        big=temp;
	    }
	    for(int i=1;i<n-1;i++){
	        int low_new=A[i]-k;
	        int high_new=A[i]+k;
	        if(high_new<=big || low_new>=small){
	            continue;
	        }
	        if(big-low_new <= high_new-small){
	            small=low_new;
	        }
	        else {
	            big=high_new;
	        }
	    }
if(ans<big-small){
    cout<<ans<<endl;
}
else{
    cout<<big-small<<endl;
}
	}
	return 0;
}