#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string str1;
	    string str2;
	    cin>>str1;
	    cin>>str2;
	    string ans="";
	    int n1=str1.length();
	    int n2=str2.length();
	    
	    if(n1<n2){
	        for(int i=0;i<n1;i++){
	            ans+=str1[i];
	            ans+=str2[i];
	        }
	        for(int j=n1;j<n2;j++){
	            ans+=str2[j];
	        }
	        
	    }
	    else{
	        for(int i=0;i<n2;i++){
	            ans+=str1[i];
	            ans+=str2[i];
	        }
	        for(int j=n2;j<n1;j++){
	            ans+=str1[j];
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}