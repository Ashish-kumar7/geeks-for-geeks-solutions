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
	int val=0;
	for(int i=0;i<n;i++){
	    val=val^A[i];
	}
	cout<<val<<endl;
	}
	return 0;
}