  void dfs(int src,vector<bool>&visited,vector<int> adj_list[],int c,int d) 	{ 		
        visited[src] = true; 		
        for(auto i:adj_list[src]) 		{ 		 
            if((src==c && i==d)||(src==d && i==c)) 		
            continue; 		 
            if(!visited[i]) 		
            dfs(i,visited,adj_list,c,d); 		
            
        } 		 	
        
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<bool>visited(V,false); 
        dfs(c,visited,adj,c,d); 
        if(!visited[d]) return 1; 
        return 0;
    }