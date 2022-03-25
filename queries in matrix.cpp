vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {
             vector<vector<int>> res(n+1, vector<int>(n+1, 0));
            for(int i=0; i<Queries.size(); i++) {
               for(int j=Queries[i][0]; j<=Queries[i][2]; j++) {
                   res[j][Queries[i][1]] += 1;
                   res[j][Queries[i][3]+1] -= 1;
               }
            }
            for(int i=0; i<n; i++) {
               for(int j=1; j<n; j++)
                   res[i][j] += res[i][j-1];
               res[i].pop_back();
            }
            res.pop_back();
            return res;
    }