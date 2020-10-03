#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    string str1=str;
	    string str2="";
	    string str3="";
	    for(int i=0;i<str.length();i++){
	        if(str[i]<='Z' && str[i]>='A'){
	            str2+=str[i];
	        }
	        else if(str[i]<='z' && str[i]>='a'){
	            str3+=str[i];
	        }
	    }
	
	sort(str2.begin(),str2.end());
	sort(str3.begin(),str3.end());
	
	string ans="";
	int j=0;
	int k=0;
	for(int i=0;i<str.length();i++){
	        if(str[i]<='Z' && str[i]>='A'){
	            ans+=str2[j];
	            j++;
	        }
	        else if(str[i]<='z' && str[i]>='a'){
	            ans+=str3[k];
	            k++;
	        }
	    }
	
	cout<<ans<<endl;
	
	}
	return 0;
}