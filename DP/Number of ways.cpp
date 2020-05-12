#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int A[81];
	A[0]=A[1]=A[2]=A[3]=1;
	A[4]=2;
	for(int i=5;i<=80;i++){
	    A[i]=A[i-1]+A[i-4];
	}
	while(t--){
	    int n;
	    cin>>n;
	    cout<<A[n]<<endl;
	}
	return 0;
}