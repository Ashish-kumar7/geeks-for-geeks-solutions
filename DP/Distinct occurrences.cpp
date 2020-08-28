int subsequenceCount(string S, string T){
  //Your code here
 long long  int n=S.length();
  long long int m=T.length();
  if(m>n || m==0){
      return 0;
  }
  long long  int mat[m+1][n+1];
  for(int i=1;i<=m;i++){
      mat[i][0]=0;
  }
  for(int i=0;i<=n;i++){
      mat[0][i]=1;
  }
  mat[0][0]=1;
  for(int i=1;i<=m;i++){
      for(int j=1;j<=n;j++){
          
          if(S[j-1]==T[i-1]){
              mat[i][j]=( ( mat[i][j-1] % 1000000007 ) + ( mat[i-1][j-1] % 1000000007) )% 1000000007 ;
          }
          else {
              mat[i][j]=mat[i][j-1] % 1000000007;
          }
      }
  }
  return mat[m][n];
}
 