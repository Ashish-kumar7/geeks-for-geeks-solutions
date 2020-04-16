int col[1000];

bool dfs(int s,int c,int vis[],vector<int>A[]){
    vis[s]=1;
    col[s]=c;
    for(int aa:A[s]){
        if(vis[aa]==0){
            dfs(aa,c^1,vis,A);
            if(dfs(aa,c^1,vis,A)==0){
                return 0;
            }
        }
        else{
            if(col[aa]==col[s]){
                return 0;
            }
        }
    }
    return 1;
}
bool isBipartite(int G[][MAX],int v){
    vector<int>A[1000];
     for(int i=0;i<v;i++){
         for(int j=0;j<v;j++){
             if(G[i][j]==1){
                 A[i].push_back(j);
                 A[j].push_back(i);
             }
         }
     }
     int vis[v];
     for(int i=0;i<v;i++){
         vis[i]=0;
     }
     int c=0;
     for(int i=0;i<v;i++){
         if(vis[i]==0){
            bool x= dfs(i,c,vis,A);
            if(x==0){
                return 0;
            }
         }
     }
     return 1;
}