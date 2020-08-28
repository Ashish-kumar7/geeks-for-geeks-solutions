#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	
	    string str;
	    cin>>str;
	    
	    map<char,int>mp;
	    
	    for(int i=0;i<str.length();i++){
	        mp[str[i]]++;
	    }
	    int flag=0;
	    for(int i=0;i<str.length();i++){
	        if(mp[str[i]]>=2){
	            flag=1;
	            cout<<str[i]<<endl;
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<-1<<endl;
	    }
	}
	return 0;
}