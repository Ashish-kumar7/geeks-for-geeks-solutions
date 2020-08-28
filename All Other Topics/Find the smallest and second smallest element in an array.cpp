#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        mp[A[i]]++;
	    }
	   for(auto it=mp.begin();it!=mp.end();it++){
	       if(mp.size()<2){
	           cout<<-1<<endl;
	           break;
	       }
	       auto it1=mp.begin();
	       cout<<it1->first<<" ";
	       it1++;
	       cout<<it1->first<<endl;
	       break;
	   }
	}
	return 0;
}