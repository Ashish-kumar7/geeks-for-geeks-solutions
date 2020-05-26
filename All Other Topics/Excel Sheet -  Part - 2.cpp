#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    long long int ans=0;
	    for(int i=0;i<s.length();i++){
	        ans=ans*26;
	        ans+=(s[i]-'A'+1);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}