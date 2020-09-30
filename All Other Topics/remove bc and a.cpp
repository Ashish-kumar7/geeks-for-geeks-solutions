#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    string ans;
	    
	    int n=str.length();
	    for(int i=0;i<n;){
	        if(str[i]=='a' && str[i+1]=='c'){
	            i=i+2;
	        }
	        else if(str[i]=='b'){
	            i++;
	        }
	        else{
	            ans+=str[i];
	            i++;
	        }
	    }
	
	cout<<ans<<endl;
	}
	return 0;
}