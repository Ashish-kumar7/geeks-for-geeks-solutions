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
	int i=0;
	int j=n-1;
	int val=-100;
	while(i<j){
	    val=max(val,(j-i)*(min(A[i],A[j])));
	    if(A[i]<A[j]){
	        i++;
	    }
	    else {
	        j--;
	    }
	}
	cout<<val<<endl;
	}
	return 0;
}