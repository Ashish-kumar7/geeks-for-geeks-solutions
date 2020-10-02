#include<bits/stdc++.h>
using namespace std;

bool subsequence(string str1,string str2){
    int n=str1.length();
    int m=str2.length();
    
    int j=0;
    for(int i=0;i<n;i++){
        if(str1[i]==str2[j]){
            j++;
        }
        
        if(j==m){
        return 1;
    }
    }
    return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	        string A[n];
	        for(int i=0;i<n;i++){
	            cin>>A[i];
	        }
	        string str;
	        cin>>str;
	        string ans;
	        
	        int len=0;
	        for(int i=0;i<n;i++){
	            string a=A[i];
	            if(a.length()>len && a.length()<=str.length() && subsequence(str,a)){
	                len=a.length();
	                ans=a;
	            }
	        }
	        
	        cout<<ans<<endl;
	}
	return 0;
}