void dfs(int s,vector<int>A[],int visited[]){
    //code to print dfs of  a graph
    visited[s]==1;
    cout<<s<<" ";
    for(int i=0;i<A[s].size();i++)
    {
        if(visited[A[s][i]]==0)
        {
            dfs(A[s][i],A,visited);
        }
    }
    
    
}