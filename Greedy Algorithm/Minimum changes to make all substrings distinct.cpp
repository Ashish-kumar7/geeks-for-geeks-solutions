#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    unordered_map<char,int>mp;
	    for(int i=0;i<str.length();i++){
	        mp[str[i]]++;
	    }
	    int sum=0;
	    for(auto it=mp.begin();it!=mp.end();it++){
	        if(it->second>=2){
	            sum+=(it->second-1);
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}