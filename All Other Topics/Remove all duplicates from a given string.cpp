#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    map<char,int>mp;
	    
	    string str;
	    
	    for(int i=0;i<s.length();i++){
	        if(mp.find(s[i])==mp.end()){
	            str=str+s[i];
	            mp[s[i]]++;
	        }
	    }
	    cout<<str<<endl;
	}
	return 0;
}