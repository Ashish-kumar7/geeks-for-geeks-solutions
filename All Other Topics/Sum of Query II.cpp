#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    int q;
	    cin>>q;
	    while(q--){
	        int a,b;
	        cin>>a;
	        cin>>b;
	        long long int sum=0;
	        for(int i=a;i<=b;i++){
	            sum=sum+A[i-1];
	        }
	        cout<<sum<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}