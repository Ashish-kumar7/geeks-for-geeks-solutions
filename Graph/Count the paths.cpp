#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>V[],int p,int q,int & path,int visited[]){
    visited[p]=1;
    if(p==q){
        path++;
    }
    else{
        vector<int>:: iterator it;
        for(it=V[p].begin();it!=V[p].end();it++){
            if(visited[*it]==0){
                dfs(V,*it,q,path,visited);
            }
        }
    }
    visited[p]=0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n;
	cin>>k;
	vector<int>V[n];
	for(int i=0;i<k;i++){
	    int a,b;
	    cin>>a;
	    cin>>b;
	    V[a].push_back(b);
	}
	int p,q;
	cin>>p;
	cin>>q;
	int visited[n];
	for(int i=0;i<n;i++){
	    visited[i]=0;
	}
	int path=0;
	dfs(V,p,q,path,visited);
	cout<<path<<endl;
	}
	return 0;
}