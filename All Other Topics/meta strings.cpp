#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string a;
	    string b;
	    cin>>a;
	    cin>>b;
	    int count=0;
	    for(int i=0;i<a.length();i++){
	        if(a[i]!=b[i]){
	            count++;
	        }
	    }
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	if(a==b and count==2){
	    cout<<1<<endl;
	}
	else{
	    cout<<0<<endl;
	}
	}
	return 0;
}