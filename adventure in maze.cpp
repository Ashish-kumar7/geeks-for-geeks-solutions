void ways(vector<vector<int>> m,int i,int j,int sum,vector<int>& res)
    {   
        if(i<0 || j<0) return;
        if(i==0 && j==0)
        {   
            sum+=m[i][j];
            res.push_back(sum);
            return;
        }
        
        if(m[i][j]==1)
            ways(m,i,j+1,sum+m[i][j],res);
        else if(m[i][j]==2)
            ways(m,i+1,j,sum+m[i][j],res);
        else
        {   
            ways(m,i,j+1,sum+m[i][j],res);
            ways(m,i+1,j,sum+m[i][j],res);
        }
        return;
    }
    int mod=1000000007;
    vector<int> FindWays(vector<vector<int>> matrix)
    {
        int n=matrix.size();
        pair<int ,int> dp[n][n];
   
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                dp[i][j]={0, matrix[i][j]};
        }
        
        dp[0][0]={1,matrix[0][0]};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i-1>=0 && (matrix[i-1][j]==3 || matrix[i-1][j]==2))
                {
                    if(dp[i-1][j].first)
                        dp[i][j]= {dp[i-1][j].first%mod,dp[i-1][j].second+dp[i][j].second};
                }
                if(j-1>=0 && (matrix[i][j-1]==3|| matrix[i][j-1]==1))
                {
                    int f=(dp[i][j].first+dp[i][j-1].first)%mod;
                    int s=dp[i][j].second;
                    if(dp[i][j-1].first)
                        s=(max(dp[i][j-1].second+matrix[i][j],dp[i][j].second))%mod;
                    dp[i][j]= {f,s};
                }
            }
        }
   vector<int> v;
   v.push_back(dp[n-1][n-1].first%1000000007);
   if(dp[n-1][n-1].first)
   v.push_back(dp[n-1][n-1].second);
   else
   v.push_back(0);
   return v;

   }