 int isSuperSimilar(int n, int m, vector<vector<int>>& mat, int x)
    {
        if (n == 0 || m < 2) {
            return 1;
        }
        
        x = x % m;
        if (x == 0) {
            return 1;
        }
        
        for (int i = 0; i < n; i++) {
            bool checkLeftRotate = (i % 2) == 0;
            for (int j = 0; j < m; j++) {
                if (checkLeftRotate && mat[i][j] != mat[i][(j + m - x) % m]) {
                    return 0;
                }
                
                if (!checkLeftRotate && mat[i][j] != mat[i][(j + x) % m]) {
                    return 0;
                }
            }
        }
        
        return 1;
    }