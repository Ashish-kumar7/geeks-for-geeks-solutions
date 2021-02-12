#include<bits/stdc++.h>
using namespace std;
int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    
	    map<pair<int,int>,int>mp;
	    mp[{0,0}]=1;
	    int n=str.length();
	    
	    int count0=0;
	    int count1=0;
	    int count2=0;
	    int ans=0;
	    for(int i=0;i<n;i++){
	        if(str[i]-'0'==0){
	            count0++;
	        }
	        else if(str[i]-'0'==1){
	            count1++;
	        }
	        else{
	            count2++;
	        }
	        pair<int,int>p={count0-count1 ,  count0-count2};
	        ans+=mp[p];
	        mp[p]++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}