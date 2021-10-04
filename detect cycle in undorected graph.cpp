class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int i,vector<int>adj[],int par,int vis[],int v){
        vis[i]=1;
        for(int j:adj[i]){
            
            if(vis[j]==0){
                if(dfs(j,adj,i,vis,v)){
                    return 1;
                }
            }
            else{
                if(par!=j){
                    return 1;
                }
            }
        }
        return 0;
    }
    
	bool isCycle(int v, vector<int>adj[])
	{
	    // Code here
	    if(v==0){
	        return 0;
	    }
	    int vis[v];
	    for(int i=0;i<v;i++){
	        vis[i]=0;
	    }
	    bool ans=0;
	    for(int i=0;i<v;i++){
	        if(vis[i]==0){
	             ans=dfs(i,adj,-1,vis,v);
	             if(ans==1){
	                 return 1;
	             }
	        }
	    }
	    return ans;
	    
	    
	}
};
