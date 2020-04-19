bool Graph::isEulerianCycle(){
for(int i=0;i<V;i++){
        if(adj[i].size()!=in[i]){
            return 0;
        }
    }
    return 1;
}