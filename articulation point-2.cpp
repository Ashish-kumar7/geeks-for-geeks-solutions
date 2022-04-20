void dfs(int node,int n,vector<int> adj[],vector<bool> &vis,vector<int> &low,vector<int> &tin,int timer,int p,vector<int> &ans)
  {
      vis[node]=true;
      tin[node]=low[node]=timer++;
      int child=0;
      for(int it:adj[node])
      {
          if(it==p)
          continue;
          if(vis[it])
          low[node]=min(low[node],tin[it]);
          else
          {
              dfs(it,n,adj,vis,low,tin,timer,node,ans);
              low[node] = min(low[node], low[it]);
            if (low[it] >= tin[node] && p!=-1)
                ans.push_back(node);
            ++child;
          }
      }
      if(p == -1 && child > 1)
        ans.push_back(node);
  }
    vector<int> articulationPoints(int v, vector<int>adj[]) {
        // Code here
        vector<int> ans;
        int timer=0;
        vector<bool> vis(v,false);
        vector<int> low(v,-1);
        vector<int> tin(v,-1);
        for(int i=0;i<v;i++)
        {
            if(!vis[i])
            dfs(i,v,adj,vis,low,tin,timer,-1,ans);
        }
        sort(ans.begin(),ans.end());
        
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        
        if(ans.size() == 0){
            return {-1};
        }
        return ans;
    }