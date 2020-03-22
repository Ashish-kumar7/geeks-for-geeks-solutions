void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    vis[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
       int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i =0;i<adj[u].size();i++){
            if(vis[adj[u][i]]==0){
                vis[adj[u][i]]=1;
                q.push(adj[u][i]);
            }
        }
    }
}