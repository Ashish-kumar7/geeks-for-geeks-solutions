class Solution {
public:

    bool connected(vector<int>adj[],int visited[],int parent[],int src){
        queue<int>Q;
        Q.push(src);
        visited[src]=1;
        parent[src]=0;
    
        while(!Q.empty()){
            int x=Q.front();
            Q.pop();
            for(int i=0;i<adj[x].size();i++){
                if(visited[adj[x][i]]==0){
                    visited[adj[x][i]]=1;
                    parent[adj[x][i]]=x;
                    Q.push(adj[x][i]);
                }
                else if(parent[x]!=adj[x][i]){
                    return 1;
                }
            }
        }
        return 0;
    }
    bool disconnected(int V ,vector<int>adj[]){
        int visited[V];

        for(int i=0;i<V;i++){
            visited[i]=0;
        }
        int parent[V];
        
        for(int i=0;i<V;i++){
            parent[i]=-1;
        }
    
        for(int i=0;i<V;i++){
            if(visited[i]==0){
                if(connected(adj,visited,parent,i)==1){
                    return 1;
                }
            }
        }
        return 0;
    }
	bool isCycle(int V, vector<int>adj[]){
	    
	 return disconnected(V,adj);
	}
};