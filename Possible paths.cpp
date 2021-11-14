class Solution {
  public:
	int dfs(vector<vector<int>>&graph, vector<vector<long>>&dp, int cur, int target, int k) {
        if(dp[cur][k] != -1) {
            return dp[cur][k];
        }
        dp[cur][k] = 0;
        for(int i=0; i<graph.size(); i++) {
            if(graph[cur][i]) {
                dp[cur][k] = (dp[cur][k] + dfs(graph, dp, i, target, k-1))%int(1e9+7);
            }
        }
        return dp[cur][k];
    }
	int MinimumWalk(vector<vector<int>>&graph, int u, int v, int k){
	    // Code here
	    vector<vector<long>> dp(graph.size(), vector<long>(k+1, -1));
	    dp[v][0] = 1;
	    for(int i=0; i<graph.size(); i++) {
	        if(i != v) dp[i][0] = 0;
	    }
	    dfs(graph, dp, u, v, k);
	    return dp[u][k];
	}


}