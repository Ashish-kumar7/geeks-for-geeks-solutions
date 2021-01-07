class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	      vector<int> r;
	      vector<int>ans;
	     queue<int> q;
         q.push(0);
        int vis[V];
        for(int i=0;i<V;i++){
            vis[i]=0;
        }
        vis[0]=1;
        
         while(!q.empty())
         {
             int p=q.front();
             q.pop();
             r.push_back(p);
              for(int l=0;l<adj[p].size();l++)
              {
                  if(vis[adj[p][l]]==0)
                    {
                        q.push(adj[p][l]);
                         vis[adj[p][l]]=1;
                    }
              }
         }
         return r;
	}
};