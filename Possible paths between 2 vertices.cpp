void dfs(int & path,int source,int destination,int vis[],vector<int>adj[]){
        
        vis[source]=1;
        
        if(source==destination){
            path++;
        }
        else{
            for(auto it : adj[source]){
                if(vis[it]==0)dfs(path,it,destination,vis,adj);
            }
        }
        vis[source]=0;
    }
    
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        int path=0;
        int vis[V];
        for(int i=0;i<V;i++){
            vis[i]=0;
        }
        dfs(path,source,destination,vis,adj);
        
        return path;
        
    }