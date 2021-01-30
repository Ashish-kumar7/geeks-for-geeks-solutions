#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    unordered_map<string,int>mp;
	    for(int i=0;i<str.length()-1;i++){
	        string s1=str.substr(i,2);
	        mp[s1]++;
	    }
	
	    cout<<mp.size()<<endl;
	}
	return 0;
}