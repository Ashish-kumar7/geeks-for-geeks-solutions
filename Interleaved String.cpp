class Solution{
  public:
    /*You are required to complete this method */
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        int a=A.length();
    int b=B.length();
    int c=C.length();
    if(a+b!=c){
        return 0;
    }
    int dp[a+1][b+1];
   memset(dp, 0, sizeof(dp));
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            if(i==0 && j==0){
                dp[i][j]=1;
            }
            else if(i==0){
                if(B[j-1]==C[j-1]){
                    dp[i][j]=dp[i][j-1];
                }
            }
            else if(j==0){
                if(A[i-1]==C[i-1]){
                    dp[i][j]=dp[i-1][j];
                }
            }
            else if(A[i-1]==C[i+j-1] && B[j-1]!=C[i+j-1]){
                dp[i][j]=dp[i-1][j];
            }
            else if(A[i-1]!=C[i+j-1] && B[j-1]==C[i+j-1]){
                dp[i][j]=dp[i][j-1];
            }
            else if(A[i-1]==C[i+j-1] && B[j-1]==C[i+j-1]){
                dp[i][j]=dp[i-1][j] || dp[i][j-1];
            }
        }
    }
    return dp[a][b];
    }

};