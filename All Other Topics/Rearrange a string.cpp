#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int sum=0;
	    string ans="";
	    for(int i=0;i<str.length();i++){
	        if(str[i]>=65 && str[i]<=90){
	            ans+=str[i];
	        }
	        else{
	            sum+=(str[i]-'0');
	        }
	    }
	    sort(ans.begin(),ans.end());
	    ans+=to_string(sum);
	    cout<<ans<<endl;
	}
	return 0;
}