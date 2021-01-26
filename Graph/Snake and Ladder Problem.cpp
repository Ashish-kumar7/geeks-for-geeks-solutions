class Solution{
public:
    long long int bfs(vector<long long int>adj[31]){
        long long int distance[31];
        
        queue<long long int>Q;
        Q.push(1);
        long long int visited[31];
        
        for(int i=0;i<31;i++){
            visited[i]=0;
            distance[i]=0;
        }
        
       // visited[1]=1;
        while(!Q.empty()){
            long long int x=Q.front();
            Q.pop();
            visited[x]=1;
            for(int i=0;i<adj[x].size();i++){
                
                if(visited[adj[x][i]]==0){
                    Q.push(adj[x][i]);
                    visited[adj[x][i]]=1;
                    distance[adj[x][i]]=distance[x]+1;
                }
            }
        }
    
        return distance[30];
    }

    int minThrow(int N, int arr[]){
        // code here
        vector<long long int>adj[31];
        
        int A[100];
        for(int i=0;i<100;i++){
            A[i]=0;
        }
        
        for(int i=0;i<2*N;i+=2){
            A[arr[i]]=arr[i+1]-arr[i];
        }
        
        
        for(int i=0;i<=30;i++){
            for(int j=1;j<=6;j++){
                long long int u=i;
                long long int v=u+j+A[u+j];
                adj[u].push_back(v);
            }
        }
        
        int x;
        x=bfs(adj);
        
        return x;
        
    }
};