#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    string stat;
	    string patt;
	    cin>>stat;
	    cin>>patt;
	    map<char,int>mp;
	    for(int i=0;i<patt.size();i++){
	        mp[patt[i]]++;
	    }
	    string h="$";
	    for(int i=0;i<stat.length();i++){
	        if(mp.find(stat[i])!=mp.end()){
	            h=stat[i];
	            break;
	        }
	    }
	    cout<<h<<endl;
	}
	return 0;
}