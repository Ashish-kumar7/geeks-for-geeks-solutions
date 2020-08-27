#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int sum=(n+1)*(n)/2;
	    long long int val1=sum*sum;
	    long long int val2=n*(n+1)*((2*n) + 1) /6;
	    cout<<val1-val2<<endl;
	}
	return 0;
}