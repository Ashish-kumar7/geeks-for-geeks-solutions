#include<bits/stdc++.h>
using namespace std;

string solve(int n){
    string ans="";
    while(n>0){
        char c='A' + (n-1)%26;
        ans=c+ans;
        n=(n-1)/26;
    }
    return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<solve(n)<<endl;
	}
	return 0;
}