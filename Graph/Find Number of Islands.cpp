
void dfs(int r,int s,vector<int>A[],int visited[101][101],int n,int m){
        if(r>=n || r<0 || s>=m || s<0){
            return ;
        }
        if(A[r][s]==0 || visited[r][s]==1){
            return ;
        }
    visited[r][s]=1;
    
    dfs(r+1,s,A,visited,n,m);
    dfs(r+1,s+1,A,visited,n,m);
    dfs(r+1,s-1,A,visited,n,m);
    dfs(r-1,s+1,A,visited,n,m);
    dfs(r-1,s-1,A,visited,n,m);
    dfs(r-1,s,A,visited,n,m);
    dfs(r,s+1,A,visited,n,m);
    dfs(r,s-1,A,visited,n,m);

}


int findIslands(vector<int> A[], int N, int M) {

    // Your code here
    int B[101][101];
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            B[i][j]=0;
        }
    }
    
    int ans=0;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<A[i].size();j++){
            if(B[i][j]==0 && A[i][j]==1){
                ans++;
                dfs(i,j,A,B,N,M);
            }       
        }
    }
    return ans;
    
}
