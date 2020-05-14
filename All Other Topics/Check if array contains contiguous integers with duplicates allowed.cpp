#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
	        mp[A[i]]++;
	    }
	    vector<int>V;
	    for(auto it=mp.begin();it!=mp.end();it++){
	        V.push_back(it->first);
	    }
	    int count=1;
	    for(int i=0;i<V.size()-1;i++){
	        if(V[i+1]==V[i]+1){
	            count++;
	        }
	        else{
	            break;
	        }
	    }
	    if(count==V.size()){
	        cout<<"Yes"<<endl;
	    }
	    else {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}