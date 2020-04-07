void printGraph(vector<int> adj[], int V){
    for(int i=0;i<V;i++){
        cout<<i;
        //cout<<adj[i].size()<<endl;
        for(int j=0;j<adj[i].size();j++){
            cout<<"->"<<" "<<adj[i][j];
        }
        cout<<endl;
    }
}