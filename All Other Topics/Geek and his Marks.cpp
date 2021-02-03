#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int x;
	    cin>>n;
	    cin>>x;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    sort(A,A+n);
	    int val=upper_bound(A,A+n,x)-A;
	    cout<<n-val<<endl;
	}
	return 0;
}