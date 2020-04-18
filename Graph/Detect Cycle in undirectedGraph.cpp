bool dfs(int s,int visited[],int parent,vector<int> adj[]){
    visited[s]=1;
    for(int child:adj[s]){
        if(visited[child]==0){
            if(dfs(child,visited,s,adj)){
                return 1;
            }
        }
        else{
            if(parent!=child){
                return 1;
            }
        }
    }
    return 0;
}
bool isCyclic(vector<int> adj[], int V){
   int visited[V];
   for(int i=0;i<V;i++){
       visited[i]=0;
   }
   for(int i=0;i<V;i++){
       if(visited[i]==0){
      if(dfs(i,visited,-1,adj)){
          return 1;
      }
       }
   }
       return 0;
}