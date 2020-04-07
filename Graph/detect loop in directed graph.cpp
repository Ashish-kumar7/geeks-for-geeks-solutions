bool cyclic(int b,vector<int>adj[],bool visited[],bool stackview[]){
            if(visited[b]==0){
            visited[b]=1;
            stackview[b]=1;
            for(int i=0;i<adj[b].size();i++){
                if(visited[adj[b][i]]==0){
                    if(cyclic(adj[b][i],adj,visited,stackview)==1){
                        return 1;
                    }
                }
                else if(visited[adj[b][i]]==1 && stackview[adj[b][i]]==1){
                    return 1;
                }
            }
    }
        stackview[b]=0;
        return 0;
    }
bool isCyclic(int V, vector<int> adj[]){
    bool visited[V];
    bool stackview[V];
    for(int i=0;i<V;i++){
        visited[i]=0;
        stackview[i]=0;
    }
    for(int i=0;i<V;i++){
       if(cyclic(i,adj,visited,stackview)==1){
           return 1;
        }
    }
    return 0;
}