vector<int>V[10];
int level[10];
int visited[10];
void checking (int s){
    queue<int>Q;
    Q.push(s);
    visited[s]=1;
    level[s]=0;
    while(!Q.empty()){
        int x=Q.front();
        Q.pop();
        for(int i=0;i<V[x].size();i++){   
            if(visited[v[x][i]]==0){
            Q.push(V[x][i]);
            level[V[x][i]]=level[x]+1;
            visited[V[x][i]]=1;
            }
        }
    }
}