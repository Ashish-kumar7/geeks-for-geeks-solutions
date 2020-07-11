vector<string>V;
bool check(int m[5][5],int n,int mark[5][5],int i,int j,string ss){
    if(m[n-1][n-1]==0){
        return 0;
    }
    if(i<0 || j<0 || i>=n || j>=n){
        return 0;
    }
    
    if(i==n-1 && j==n-1){
        mark[i][j]=1;
        
        V.push_back(ss);
      
        return 0;
    }
    
    if(mark[i][j]==1 || m[i][j]==0){
        return 0;
    }
    mark[i][j]=1;
    check(m,n,mark,i,j+1,ss+"R");
    check(m,n,mark,i,j-1,ss+"L");
    check(m,n,mark,i+1,j,ss+"D");
    check(m,n,mark,i-1,j,ss+"U");
    mark[i][j]=0;
    return 0;
}
vector<string> printPath(int m[MAX][MAX], int n) {
    int mark[5][5]={0};
    V.clear();
    check(m,n,mark,0,0,"");
    sort(V.begin(),V.end());
    return V;
}