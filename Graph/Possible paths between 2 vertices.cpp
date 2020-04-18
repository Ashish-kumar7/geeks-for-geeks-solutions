#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>V[],int p,int q,int & path,int visited[]){
    visited[p]=1;
    if(p==q){
        path++;
    }
    else{
        for(int child:V[p]){
            if(visited[child]==0){
                dfs(V,child,q,path,visited);
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
	vector<int>V[n+1];
	for(int i=0;i<k;i++){
	    int a,b;
	    cin>>a;
	    cin>>b;
	    V[a].push_back(b);
	}
	int p,q;
	cin>>p;
	cin>>q;
	int visited[n+1];
	for(int i=1;i<=n;i++){
	    visited[i]=0;
	}
	int path=0;
	dfs(V,p,q,path,visited);
	cout<<path<<endl;
	}
	return 0;
}