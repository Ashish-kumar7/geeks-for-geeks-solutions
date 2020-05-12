int wildCard(string pattern,string str)
{
    int m=pattern.length();
    int n=str.length();
    
    int A[n+1][m+1];
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            A[i][j]=0;
        }
    }
    
    A[0][0]=1;
    
    for(int j=1;j<=m;j++){
        if(pattern[j-1]=='*'){
            A[0][j]=A[0][j-1];
        }
    }
    
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            
            if(pattern[j-1]=='*'){
                A[i][j]= ( A[i-1][j] || A[i][j-1] );
            }
            
            else if(pattern[j-1]==str[i-1]   || pattern[j-1]=='?'){
                A[i][j]=A[i-1][j-1];
            }
            
            else {
                A[i][j]=0;
            }
            
        }
    }
    
    return  A[n][m];
}