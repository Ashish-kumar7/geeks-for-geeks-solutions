#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n==0 || n<0){
        cout<<n<<" ";
        return ;
    }
    cout<<n<<" ";
    solve(n-5);
    cout<<n<<" ";
}
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	
	    int n;
	    cin>>n;
	    solve(n);
	       cout<<endl; 
	    }
	return 0;
}