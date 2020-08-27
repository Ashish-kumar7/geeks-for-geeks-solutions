#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    unordered_map < string,int>mp;
	    
	    for(int i=0;i<n;i++){
	        string str;
	        cin>>str;
	        mp[str]++;
	    }
	    
	    map<int,string,greater<int>>mp1;
	    
	    for(auto it=mp.begin();it!=mp.end();it++){
	        mp1[it->second]=it->first;
	    }
	    
	    if(mp1.size()==1 || mp1.size()==0){
	    
	        cout<<-1<<endl;
	    }
	    else{
	        auto it1=mp1.begin();
	        it1++;
	        cout<<it1->second<<endl;
	    }
	    
	
	
	}
	return 0;
}