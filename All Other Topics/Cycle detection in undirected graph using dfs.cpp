
bool dfs(vector<int>adj[],int src,int par,int vis[]){
    vis[src]=1;

    for(int i=0;i<adj[src].size();i++){
        if(vis[adj[src][i]]==0){
           // vis[adj[src][i]]=1;
           cout<<i<<" "<<adj[src][i]<<" "<<par<<endl;
            dfs(adj,adj[src][i],src,vis);
        }
        else{
            if(adj[src][i]!=par){
                return 1;
            }
        }
    }
    return 0;
}
bool cyclecheckusingbfs(vector<int>adj[],int V){
    int vis[V];
    for(int i=0;i<V;i++){
        vis[i]=0;
    }
    return dfs(adj,1,1,vis);

}