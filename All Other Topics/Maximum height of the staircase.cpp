#include<bits/stdc++.h>
using namespace std;

int solve(int n){
     for(int i=1;i<=n/2;i++){
	        if(i*(i+1)>2*n){
	            return i-1;
	        }
	    }
}
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<solve(n)<<endl;
	   
	}
	return 0;
}