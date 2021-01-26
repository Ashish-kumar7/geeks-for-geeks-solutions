class Solution{
	public:
	
	void dfs(vector<int>adj[],stack<int>&S,int src,int visited[]){
	    
	    visited[src]=1;
	    for(int i=0;i<adj[src].size();i++){
	        if(visited[adj[src][i]]==0){
	            visited[adj[src][i]]=1;
	            dfs(adj,S,adj[src][i],visited);
	        }
	    }
	    S.push(src);
	}
	vector<int> topoSort(int V, vector<int> adj[]) {
	    // code here
	    int visited[V];
	    
	    stack<int>S;
	    for(int i=0;i<V;i++){
	        visited[i]=0;
	    }
	    
	    for(int i=0;i<V;i++){
	        if(visited[i]==0){
	            dfs(adj,S,i,visited);
	        }
	    }
	    vector<int>ans;
	    while(!S.empty()){
	        ans.push_back(S.top());
	        S.pop();
	       }
	    return ans;
	    
	}
};