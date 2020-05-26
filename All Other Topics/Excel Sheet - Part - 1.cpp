#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string ans;
	    while(n>0){
	        ans=char( (n-1)%26 + 'A' ) + ans;
	        n=(n-1)/26;
	    }
	cout<<ans<<endl;
	}
	return 0;
}