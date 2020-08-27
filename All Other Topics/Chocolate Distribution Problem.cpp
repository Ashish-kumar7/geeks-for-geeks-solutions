#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	   unsigned long long int n;
	    cin>>n;
	    unsigned long long int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	   unsigned long long int m;
	    cin>>m;
	    sort(A,A+n);
	    int min_diff=A[n-1]-A[0];
	    for(int i=0;i<n-m+1;i++){
	   unsigned long long int val=A[m+i-1]-A[i];
	        if(val<min_diff){
	            min_diff=val;
	        }
	    }
	    cout<<min_diff<<endl;
	}
	return 0;
}