#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    int n;
	    cin>>n;
	    string k="";
	    for(int i=1;i<=n;i++){
	        int h=pow(a,i);
	        string l=to_string(h);
	        k+=l;
	    }
	    map<char,int>mp;
	    for(int i=0;i<k.size();i++){   
	        if(k[i]!='0'){
	            mp[k[i]]++;
	        }
	    }
	    vector<char>B;
	    map<char,int>:: iterator it;
	    for(it=mp.begin();it!=mp.end();it++){
	        for(int i=0;i<(it->second);i++){
	            B.push_back(it->first);
	        }
	    }
	    string uu="";
	    for(int j=0;j<B.size();j++){
	        uu+=B[j];
	    }
	    cout<<uu<<endl;
	}
	return 0;
}