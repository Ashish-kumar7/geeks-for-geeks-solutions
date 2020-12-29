#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string str;
	    getline(cin,str);
	    string oldW;
	    string newW;
	    getline(cin,oldW);
	    getline(cin,newW);
	    
	    for(int i=0;i<str.length();i++){
	       string s=str.substr(i,oldW.length());
	        if(s==oldW){
	            str.replace(i,oldW.length(),newW);
	        }
	    }
	    cout<<str<<endl;
	}
	return 0;
}