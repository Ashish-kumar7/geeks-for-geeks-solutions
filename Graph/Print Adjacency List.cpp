#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,e;
    cin>>n>>e;
    vector<int> adj[n];
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        cout<<i;
        for(int j=0;j<adj[i].size();j++){
            
            cout<<"-> "<<adj[i][j];
        }
        cout<<endl;
    }
	}
	return 0;
}